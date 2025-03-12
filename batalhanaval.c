#include<stdio.h>

int main(){

char coluna[10] = {'A','B','C','D','E','F','G','H','I','J'};
int linha[10] = {0,1,2,3,4,5,6,7,8,9};
int i;
int h;
int j;
int mar[10][10] ={

        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0}
};

for(i=3; i<6;i++){
    mar[i][5]=3;


}

for(j=2; j<5;j++){
    mar[7][j]=3;


}

for(i= 1; i<4; i++){
    for(j=1; j<4; j++){
        mar[i++][j]=3;

    }

}


for(i= 0; i<3; i++){
    for(j=9; j>6; j--){
        mar[i++][j]=3;

    }

}








printf(" Bem vindo ao jogo Batalha naval!\n");
printf("          ***TABULEIRO***\n");

for(h=0;h<10;h++) {
    printf("   %c", coluna[h]);
    
};
    printf("\n");
    for(i=0;i<10;i++){
        printf("%d", linha[i]);
    for(j=0;j<10;j++){
        
        printf("   %d", mar[i][j]);

        
    }
    printf ("\n");
}
        
    printf("\n");





    return 0;
}