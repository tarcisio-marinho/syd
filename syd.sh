#!/bin/bash

if [ "$1" == "" ]; then
	echo "Digite os argumentos após o nome do script, com um esapço entre eles."
	echo "Ex: $0 nome-do-arquivo nome-da-alteração nome-remoto(origin) 1/2"
	echo "Após o nome do branch digite o número 1 para salvar login e senha do seu github, e 2 para não salvar."
	echo "o branch padrão é o master"
fi

if [ "$1" != "" ] && [ "$2" != "" ] && [ "$3" != "" ] && [ "$4" == "1" ] ; then
	git add $1
	git commit -m $2
	git push $3 master
	git config --global credential.helper cache
fi

if [ "$1" != "" ] && [ "$2" != "" ] && [ "$3" != "" ] && [ "$4" == "2" ] ; then
	git add $1
	git commit -m $2
	git push $3 master
	echo "Não precisou salvar a senha."
fi
