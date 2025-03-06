#include <stdio.h>

int main () {

int torre = 0, bispo = 0, rainha, cavalo, movimento= 1;

printf("O jogo de xadrez começou!/n");
printf("A primeira peça a se mover será a torre!\n");

while(torre<5){

    printf("Torre moveu a direita.\n");
    torre++;
}

do{
 printf("bispo cima\n");
 printf("bispo direita\n");
 bispo++;

} while(bispo<5);

for(rainha=0;rainha<8;rainha++){
    printf("Rainha foi para esquerda\n");

}
    for(cavalo=1; cavalo<2; cavalo++) {
        while(movimento <=2){

            printf("cavalo foi para baixo\n");
            movimento++;
        }

        printf("Cavalo foi para esquerda\n");


    }

        



    return 0;
}