#!/bin/bash

if [ "$1" == "" ]; then
	echo "usage: syd Nome_Do_Commit"
fi

if [ "$1" != "" ] ; then
	git add '*'
	git commit -m $1
	git push origin master
	git config --global credential.helper cache
fi
