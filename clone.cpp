#include <iostream>
#include<cstring>

void error(const char *s){
    std::cout << s << std::endl;
    exit(-1);
}


void help(const char * s){
    std::cout << " Usage: " << s << " [URL]" << std::endl;
    exit(0);
}

int main(int argc, char *argv[]){
    if(argc == 1){
        error("Você não especificou a url para download");
    }

    if(strcmp(argv[1], "--help") == 0 || strcmp(argv[1], "-h") == 0){
        help(argv[0]);
    }

    std::string command = "git clone ";

    command += std::string(argv[1]);
    system(command.c_str());
}