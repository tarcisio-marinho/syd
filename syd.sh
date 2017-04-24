#!/bin/bash

if [ "$1" == "" ]; then
	echo "Digite os argumentos após o nome do script, com um esapço entre eles"
	echo "Ex: $0 nome-do-arquivo nome-da-alteração nome branch"
fi

if [ "$1" != "" ] && [ "$2" != "" ] && [ "$3" != "" ]; then
echo "funciona"
git add $1
git commit -m $2
git push $3 master
fi


