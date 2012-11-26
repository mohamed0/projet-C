//
//  main.c
//  projet-C
//
//  Created by Mohamed on 26/11/12.
//  Copyright (c) 2012 Mohamed. All rights reserved.
//

#include <stdio.h>

//étape 1 : Codage par une chaine de cara pour chaque main 
char* jeu[52]= {"2p","3p","4p", "5p", "6p", "7p","8p", "9p", "Ap", "Bp","Cp","Dp", "Ep", "2q","3q","4q","5q","6q","7q","8q", "9q","Aq","Bq","Cq","Dq","Eq","2k","3k","4k","5k","6k","7k","8k","9k","Ak","Bk","Ck","Dk","Ek","2t","3t","4t","5t","6t","7t","8t","9t","At","Bt","Ct","Dt","Et"};


// Genere toutes les mains possibles au poker
char* ListeMains[2598960];

void listeMains() {
    char main[11];
    for (int i=0; i<52; i++) {
        for (int j=0; j<52; j++) {
            for (int k=0; k<52; k++) {
                for (int l=0; l<52; l++) {
                    for (int m=0; m<52; m++) {
                        sprintf(main, "%s%s%s%s%s",jeu[i],jeu[j],jeu[k],jeu[l],jeu[m]);
                        printf("%s\n",main);
                                            }
                                        }
                                    }
                                }
                            }

}
//Determiner carre
void carre(char* main) {
    int cdt= 1;
    while (cdt==1) {
        if(main[0]==main[2]){
            if(main[2]==main[4]) {
                if(main[4]==main[6]){
                    char resultCarre[3] = {"8%i%i",main[6],main[8]};
                    cdt=0;
                    
                }
                else if (main[4]==main[8]){
                  char resultCarre[3] = {"8%i%i",main[8],main[6]};
                cdt=0;
                }
                
                else char resultCarre[]= {""};
                

        }
    }
    
}


//calculer la force
void calculeForce(){



}

int main(int argc, const char * argv[])
{

    // insert code here...
    listeMains();
    
    carre("5p2c9kDtEt");
    return 0;
}

