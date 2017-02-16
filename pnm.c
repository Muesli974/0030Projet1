/**
 * pnm.c
 *
 * Ce fichier contient les définitions de types et
 * les fonctions de manipulation d'images PNM.
 *
 * @author: Nom Prenom Matricule
 * @date:
 * @projet: INFO0030 Projet 1
 */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "pnm.h"


/**
 * Définition du type opaque PNM
 *
 */
struct PNM_t {
    const char[4] format;
    const size_t height;
    const size_t width;
    const size_t maxPixelVal;
};


int load_pnm(PNM **image, char* filename) {

   /* Insérez le code ici */

   return 0;
}

int write_pnm(PNM *image, char* filename) {

   /* Insérez le code ici */

   return 0;
}

    FILE *fp = fopen(nomf,"r");
    char line[MAX+1];
    int nbLine=0;

    while (fgets(line,MAX,fp) != NULL){
        nbLine++; /* compte le nombre de lignes du fichier */

        if (line[0] != '\n' || line[0] != '#'){
            if(nbLine==0)
                switch(line[1])
                    case '1'
                        if(image->format != 'PBM')
                            fprintf(stderr,"Incorrect magical number\n"
                                    "Format is %s but magical number "
                                    "corresponds to PPM.\n",image->format);
                        return -3;

                    case '2'
                        if(image->format != 'PGM')
                            fprintf(stderr,"Incorrect magical number\n"
                                    "Format is %s but magical number "
                                    "corresponds to PPM.\n",image->format);
                        return -3;

                    case '3'
                        if(image->format != 'PPM')
                            fprintf(stderr,"Incorrect magical number\n"
                                    "Format is %s but magical number "
                                    "corresponds to PPM.\n",image->format);
                        return -3;

                    case default
                        fprintf(stderr,"Incorrect magical number\n");
                        return -3;


        }

