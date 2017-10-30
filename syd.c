#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(int argc, char *argv[]){
    char *add, *commit, *push;
    int i;
    add = (char *)malloc(sizeof(char) * (10));
    push =(char *)malloc(sizeof(char) * (23));
    commit = (char *)malloc(sizeof(char) * (1000));

    strcpy(add, "git add *");
    strcpy(push, "git push origin master");
    strcpy(commit, "git commit -m '");
    for (i = 1; i<argc; i++){
        strcat(commit, argv[i]);
        strcat(commit, " ");
    }
    strcat(commit, "'");

    system(add);
    system(commit);
    system(push);
    
    return 0;
}