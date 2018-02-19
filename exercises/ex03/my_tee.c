#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char *argv[]){
    char op;
    char ch;

    //int used as boolean flag for different options
    //0 - false, 1 - true
    int a_option = 0;
    int p_option = 0;

    while ((op = getopt(argc, argv, "ap")) != EOF){
        switch(op) {
            case 'a':
                a_option = 1;
                break;
            case 'p':
                p_option = 1;
                break;
            default:
                printf("%s\n", "Unknown options");
                break;
        }
    }
    argc -= optind;
    argv += optind;
     
    FILE *file;
    if (a_option){
        file = fopen(argv[0], "a");
    }else{
        file = fopen(argv[0], "w");
    }

    while (read(STDIN_FILENO, &ch, 1) > 0){
        printf("%c",ch);
        fprintf(file, "%c", ch);
    }

    fclose(file);
    return 0;
}

/*
 * Reflection: Knowledge of how to work with input/outputs within C that I learned from HFC Ch.3 came handy. However, I wasn't sure how to read a content of standard input when I don't know the size of the input. Rearching this issue slowed my implementation a bit. I also wasn't sure what it meant to include -p option and spent some time looking around for it (but still don't have good answer). Next time, I will research all components of the program that I think I need before start writing code, so I don't have to stop writing code in the middle of development and spend significant amount of time researching something that I could've done before.
 */

/* In professional code, I see  lot more error checking and logging both for a user and a system.
 */

