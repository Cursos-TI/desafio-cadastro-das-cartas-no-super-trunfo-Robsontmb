#include<stdio.h>

int main(){

char coluna[10] = {'A','B','C','D','E','F','G','H','I','J'};
int linha[10] = {1,2,3,4,5,6,7,8,9,10};
int k;
int i;
int h;
int j;
int mar[10][10] ={

        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,3,0,0},
        {0,0,0,0,0,0,0,3,0,0},
        {0,0,0,0,0,0,0,3,0,0},
        {0,0,0,3,3,3,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0}
};



printf(" Bem vindo ao jogo Batalha naval!\n");

for(h=0;h<10;h++) {
    printf("  %c", coluna[h]);
    
};
    printf("\n");
    for(i=0;i<10;i++){
    for(j=0;j<10;j++){
        
        printf("  %d", mar[i][j]);

        
    }
    printf ("\n");
}
        
    printf("\n");





    return 0;
}