/**
 * main.c
 *
 * Ce fichier contient la fonction main() du programme de manipulation
 * de fichiers pnm.
 *
 * @author: Nom Prenom Matricule
 * @date:
 * @projet: INFO0030 Projet 1
 */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <unistd.h>
#include <ctype.h>
#include <getopt.h>

#include "pnm.h"


int main(int argc, char *argv[]) {

    char *optstring = "hf:";
    int val;

    while((val=getopt(argc, argv, optstring))!=EOF){
        switch(val){
            case 'h':
                printf("-f [Format] allows you to specify the format of your image.\n"
                       "Known formats are : PBM PGM PPM\n");
                break;

            case 'f':
                if(optarg=!PBM && optarg!=PGM && optarg!=PPM)
                    printf("Unknown format\nKnown formats are : PBM PGM PPM\n");
                char[4] format=optarg;
                break;

            case '?':
                printf("unknown option : %c\n", optopt);
                break;

            case ':':
                printf("missing arg : %c\n", optopt);
                break;
        }
    }

    return 0;
}

