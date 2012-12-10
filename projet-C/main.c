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
// fonction cartes différentes
int diff(char* main){
    if (main[0]!= main[2] && main[0] != main[4] && main[0] != main[6] && main[0] != main[8] && main[2] != main[4] && main[2] != main[6] && main[2] != main[8] && main[4] != main[6] && main[4] != main[8] && main[6] != main[8]) {
        return 1;
    }
    else return 0;
    
}



//fonction flush 
char flush(char* main){
    char resultFlush[6]="";
        if(main[1]==main[3] && main[3]==main[5] && main[5]==main[7] && main[7]==main[9] ) {
                 //verifier si on ramene seulement la carte, ou aussi  la couleur (p,q,k,l,m)
             sprintf(resultFlush,"6%i%i%i%i%i", main[0],main[2],main[4],main[6],main[8]);
        }
    return resultFlush;
}

//fonction quinte
char quinte(char* main){
    if(strcmp(diff(main),1)){
        if(strcmp(flush(main)," ")){
            
        }
        
    }
    
}

/*//Determiner quinteFlush : vérifie seulement le cas ou quinteflush =ABCDE
 char quinteFlush(char* main){
 int cdt= 1;
 while (cdt==1) {
 //verification chaque carte differente
 if (){
 //verification couleur
 if(!strcmp(flush(main,""))) {
 
 //verification cartes ABCDE
 if(main[0]=="A" or main[0]=="B" or main[0]=="D" or main[0]=="C" or main[0]=="E") {
 if(main[2]=="A" or main[2]=="B" or main[2]=="D" or main[2]=="C" or main[2]=="E") {
 if(main[4]=="A" or main[4]=="B" or main[4]=="D" or main[4]=="C" or main[4]=="E" ) {
 if(main[6]=="A" or main[6]=="B" or main[6]=="D" or main[6]=="C" or main[6]=="E") {
 if(main[8]=="A" or main[8]=="B" or main[8]=="D" or main[8]=="C" or main[8]=="E") {
 char resultQuinteFlush[6]={"9E"};
 }
 else resultQuinteFlush[6]="";
 }
 else resultQuinteFlush[6]="";
 }
 else resultQuinteFlush[6]="";
 }
 else resultQuinteFlush[6]="";
 }
 else resultQuinteFlush[6]="";
 }
 else resultQuinteFlush[6]="";
 
 }
 else resultQuinteFlush[6]="";
 }
 return resultQuinteFlush;
 }
 */





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

