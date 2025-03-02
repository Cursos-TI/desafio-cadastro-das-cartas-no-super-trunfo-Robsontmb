#include <stdio.h>

int main () {

    int populacao = 211000, populacao2 = 45000;
    float area= 850.50, area2= 450.30;
    int pib= 580, pib2= 820;
    float densidadedemografica = populacao / area , densidadedemografica2= populacao2 / area2;
    int opcao;
    int pais;
    int habilidade;

    printf("Bem vindo ao jogo Supertrunfo países!\n");
    printf("Escolha uma opção:\n");
    printf("1. Iniciar jogo.\n");
    printf("2. como jogar.\n");
    printf("3. Créditos.\n");
    printf("4. Sair.\n");
    scanf("%d", &opcao);

    switch(opcao){

        case 1:

        printf("Agora você poderá escolher um país:\n");
        printf("1.Brasil\n");
        printf("População: %d\n",populacao);
        printf("area: %f\n", area);
        printf("pib: %d\n", pib);
        printf("densidade demográfica: %.2f\n", densidadedemografica);
        printf("2. Argentina:\n");
        printf("População: %d\n",populacao2);
        printf("area: %f\n", area2);
        printf("pib: %d\n", pib2);
        printf("densidade demográfica: %.2f\n", densidadedemografica2);
        scanf("%d", &pais);


        switch (pais)
        {
        case 1:
        printf("Você escolheu Brasil.\n");
        printf("Escolha uma habilidade:\n ");
        printf("1. População.\n");
        printf("2. Area.\n");
        printf("3. Pib.\n");
        printf("4. Densidade.\n");

        switch(habilidade){
            case 1:
            printf("Você escolheu População.\n");
            printf("População Brasil: %d contra população Argentina:%d.\n", populacao , populacao2);
            populacao>populacao2 ? printf("Você ganhou") : printf("Você perdeu");
            break;
            
            case 2:
            printf("Você escolheu Area.\n");
            printf("Area Brasil: %.2f contra Area Argentina:%.2f.\n", area , area2);
            area>area2 ? printf("Você ganhou") : printf("Você perdeu");
            break;

            case 3:
            printf("Você escolheu Pib.\n");
            printf("Pib Brasil: %d contra Pib Argentina:%d.\n", pib , pib2);
            pib>pib2 ? printf("Você ganhou") : printf("Você perdeu");

            case 4:
            printf("Você escolheu densidade.\n");
            printf("densidade Brasil: %.2f contra densidade Argentina:%.2f.\n", densidadedemografica , densidadedemografica2);
            densidadedemografica<densidadedemografica2 ? printf("Você ganhou") : printf("Você perdeu");
            break;

            default:
            printf("Opção inválida.\n");
        
        }
            
            break;

        case 2:
        printf("Você escolheu Argentina.\n");
        printf("Escolha uma habilidade:\n ");
        printf("1. População.\n");
        printf("2. Area.\n");
        printf("3. Pib.\n");
        printf("4. Densidade.\n");

        switch(habilidade){
        case 1:
            printf("Você escolheu População.\n");
            printf("População Brasil: %d contra população Argentina:%d.\n", populacao , populacao2);
            populacao<populacao2 ? printf("Você ganhou") : printf("Você perdeu");
            break;
            
            case 2:
            printf("Você escolheu Area.\n");
            printf("Area Brasil: %.2f contra Area Argentina:%.2f.\n", area , area2);
            area<area2 ? printf("Você ganhou") : printf("Você perdeu");
            break;

            case 3:
            printf("Você escolheu Pib.\n");
            printf("Pib Brasil: %d contra Pib Argentina:%d.\n", pib , pib2);
            pib<pib2 ? printf("Você ganhou") : printf("Você perdeu");

            case 4:
            printf("Você escolheu densidade.\n");
            printf("densidade Brasil: %.2f contra densidade Argentina:%.2f.\n", densidadedemografica , densidadedemografica2);
            densidadedemografica>densidadedemografica2 ? printf("Você ganhou") : printf("Você perdeu");
            break;

            default:
            printf("Opção inválida.\n");



        break;
        
        default:
          printf ("Comando invalido;\n");
        }









        break;

        case 2:
        printf("O jogo é bem simples, o jogador deve escolher uma carta referente a um país.\n");
        printf("Depois da escolha o computador usará a outra carta.\n");
        printf("O jogador deverá escolher um atributo entre: população, área, pib e densidade populacional.\n");
        printf("Todos os atributos terão que ser maiores, menos a densidade demográfica\n");
        printf("Bom jogo!\n");

        break;

        case 3:
        printf("Jogo desenvolvido por Robson Tadeu.\n");
        printf("Obrigado por jogar.\n");
        

        break;

        case 4:
        ("Jogo encerrado!\n");
        

        break;

        default:
        printf("Opção inválida, por favor reinicie o jogo.\n");

        return 0;

    














    }










}