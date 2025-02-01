   #include <stdio.h>

int main() {

    char estado [30];
    char codigo [3];
    char cidade [30];
    int populacao;
    float area;
    float pib;
    int pontosturisticos;

    printf("Bem vindo ao jogo SUPER TRUNFO países!\n");
    printf("Nosso diferencial é que o usuário que define os dados\n");
    printf("Começaremos com o país: Brasil\n");
    printf("Para começarmos digite um estado brasileiro?\n");
    scanf("%s", &estado); 
    printf("Escolha uma cidade do estado:\n");
    scanf("%s", cidade);
    printf("Escolha o código da carta de A até H e do número 01 até 04. Exemplo: A01. Qual seu código?\n");
    scanf("%s", &codigo);
    printf("Digite o número da populaçao da cidade:\n");
    scanf("%d", &populacao);
    printf("Digite a área da cidade:\n");
    scanf("%f", &area);
    printf("Digite o PIB da sua cidade:\n");
    scanf("%f",&pib);
    printf("Digite quantos pontos turisticos existem em sua cidade:\n");
    scanf("%d", &pontosturisticos);
    printf("País: Brasil \n");
    printf("Código da cidade: %s\n", codigo);
    printf("Estado: %s\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Pontos turísticos: %d\n", pontosturisticos);


  return 0;
}

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
