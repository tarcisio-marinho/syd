#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(int argc, char *argv[]){
    char * comand;
    int i;

    comand = (char *)malloc(sizeof(char) * (1000));    
    strcpy(comand, "git commit -m ' ");
    for (i = 1; i<argc; i++){
        strcat(comand, argv[i]);
        strcat(comand, " ");
        
    }
    printf("%s\n", comand);

    
    return 0;
}