#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, const char* argv[]){
    int c;

    if(argc < 2){
        fprintf(stderr, "Too few arguments. ");
    }
    if(strcmp(argv[1],"tolower") == 0){
        while((c = getchar()) != EOF){
                putchar(tolower(c));
        } 
    }
    else if(strcmp(argv[1],"toupper") == 0){
        while((c = getchar()) != EOF){
                putchar(toupper(c));
        }
    } else{
        printf("Argument need to be \"toupper\" or \"tolower\".\n" );
        return 1;
    }
    return 0;
}