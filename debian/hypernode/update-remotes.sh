#!/bin/bash

set -e

while getopts "s:" opt; do
    case "$opt" in
        s)
            skip_push="$OPTARG" ;;
    esac
done

GIT="chronic git"
HYPERNODE_BRANCH="hypernode-7.0"
MAINTAINER_BRANCHES="master-7.0 upstream-7.0 pristine-tar"

$GIT reset --hard
$GIT clean -fd

if ! (git remote -v | grep pkg-php > /dev/null); then
    echo "It seems like you do not have the remote pkg-php sources configured."
    echo "I will now do that for you"

    $GIT remote add pkg-php https://github.com/pkg-php/php.git
    $GIT remote set-branches pkg-php $MAINTAINER_BRANCHES
fi

echo "Will now refresh maintainer's branches for you: $MAINTAINER_BRANCHES"
$GIT fetch pkg-php

echo "Resetting your local branches to their respective maintainer's branches"

for branch in $MAINTAINER_BRANCHES; do
    echo -n " - Updating $branch: "

    if ! $GIT checkout $branch; then
        echo "    - Creating local branch $branch off pkg-php/$branch"
        $GIT branch $branch pkg-php/$branch
        $GIT checkout $branch
    else
        echo "done"
    fi
    
    $GIT clean -fd
    $GIT reset --hard pkg-php/$branch
    if ! $skip_push; then
        $GIT push byte $branch
    fi
done
    
$GIT checkout hypernode-7.0

echo "Now merge master-7.0 to hypernode-7.0 to merge new changes"
