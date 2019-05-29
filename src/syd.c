#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(int argc, char *argv[]){
    char *add, *commit, *push;
    int i;

    if(argc == 1){    
        printf("Você não deu o nome do commit\nUsage:\n%s nome do commit\n", argv[0]);
        return -1;
    }   

    add = (char *)malloc(sizeof(char) * (10));
    push =(char *)malloc(sizeof(char) * (23));
    commit = (char *)malloc(sizeof(char) * (1000));

    strcpy(add, "git add *");
    strcpy(push, "git push");
    strcpy(commit, "git commit -m '");
    for (i = 1; i<argc; i++){
        strcat(commit, argv[i]);
        strcat(commit, " ");
    }
    strcat(commit, "'");

    system(add);
    system(commit);
    system(push);

    free(add);
    free(commit);
    free(push);

    return 0;
}
