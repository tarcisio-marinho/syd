#include <iostream>
#include <cstring>
#include <string>

void error(const char *s){
    std::cout << s << std::endl;
    exit(-1);
}


void help(const char *s){
    std::cout << " Usage: " << s << " [URL]" << std::endl;
    std::cout << " Usage2: " << s << " [github-username] [repository-name]" << std::endl;
    std::cout << " Usage3: " << s << " [repository-name] # Clone from tarcisio-marinho" << std::endl;
    exit(0);
}

std::string user_and_repo(const char * username, const char * repo){
    // clone repo-name
    // clone user repo-name
    const char * part = "https://github.com/";
    std::string complete_url = std::string(part) += std::string(username) +=
                               std::string("/") += std::string(repo) += std::string(".git");
    return complete_url;
}

std::string only_repo(const char * repo){
    
    const char * part = "https://github.com/tarcisio-marinho/";
    std::string complete_url = std::string(part) += std::string(repo) +=
                                std::string(".git");
    return complete_url;
}

int main(int argc, char *argv[]){
    if(argc == 1){
        error("Você não especificou a url para download\nclone --help\nPara ajuda.\n");
    }

    if(strcmp(argv[1], "--help") == 0 || strcmp(argv[1], "-h") == 0){
        help(argv[0]);
    }
    
    std::string ret;

    if(argc == 3){
        ret = user_and_repo(argv[1], argv[2]);
    }else if(argc == 2){
        std::string http = std::string(argv[1]).substr(0, 4);
        if(http == "http"){
            ret = std::string(argv[1]);

        }else{
            ret = only_repo(argv[1]);
        }
    }else{
        error("Parâmetros errados.\nclone --help\nPara ajuda.\n");
    }
    
    std::string command = "git clone ";

    command += ret;
    system(command.c_str());
}