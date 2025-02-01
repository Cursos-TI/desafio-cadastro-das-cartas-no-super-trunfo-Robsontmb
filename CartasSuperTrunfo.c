 #include <stdio.h>

int main() {

    char codigo [3];
    char codigo2 [3];
    char cidade [30];
    char cidade2 [30];
    int populacao, populacao2;
    float area, area2;
    long long int pib, pib2;
    int pontosturisticos, pontosturisticos2;
    double densidadepopulacional, densidadepopulacional2;
    double pibpercapta, pibpercapta2;
    double superpoder, superpoder2;


    printf("Bem vindo ao jogo SUPER TRUNFO países!\n");
    printf("Nosso diferencial é que o usuário que define os dados\n");
    printf("Começaremos com o país: Brasil\n");
    printf("Escolha uma cidade:\n");
    scanf("%s", &cidade);
    printf("Escolha o código da carta de A até H e do número 01 até 04. Exemplo: A01. Qual seu código?\n");
    scanf("%s", &codigo);
    printf("Digite o número da populaçao da cidade:\n");
    scanf("%d", &populacao);
    printf("Digite a área da cidade:\n");
    scanf("%f", &area);
    printf("Digite o PIB da sua cidade:\n");
    scanf("%lld",&pib);
    printf("Digite quantos pontos turisticos existem em sua cidade:\n");
    scanf("%d", &pontosturisticos);
    printf("País: Brasil \n");
    printf("Código da cidade: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB: %lld\n", pib);
    printf("Pontos turísticos: %d\n", pontosturisticos);
    
    densidadepopulacional = (double) populacao / area;
    pibpercapta = pib / populacao;

    printf("Densidade populacional: %.2f\n", densidadepopulacional);
    printf("PIB per capta: %.2f\n", pibpercapta);
    
    superpoder = (double) populacao + area + pib + pontosturisticos + densidadepopulacional + pibpercapta;

    printf("Super poder: %.2f\n", superpoder);


    printf(" Agora você criará uma carta com outra cidade brasileira para compararmos os dados!\n");
    printf("Escolha uma cidade:\n");
    scanf("%s", &cidade2);
    printf("Escolha o código da carta de A até H e do número 01 até 04. Exemplo: A01. Qual seu código? diferente do %s\n", codigo);
    scanf("%s", &codigo2);
    printf("Digite o número da populaçao da cidade:\n");
    scanf("%d", &populacao2);
    printf("Digite a área da cidade:\n");
    scanf("%f", &area2);
    printf("Digite o PIB da sua cidade:\n");
    scanf("%lld",&pib2);
    printf("Digite quantos pontos turisticos existem em sua cidade:\n");
    scanf("%d", &pontosturisticos2);
    printf("País: Brasil \n");
    printf("Código da cidade: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %lld\n", pib2);
    printf("Pontos turísticos: %d\n", pontosturisticos2);
    
    densidadepopulacional2 = (double) populacao2 / area2;
    pibpercapta2 =  pib2 / populacao2;

    printf("Densidade populacional: %.2f\n", densidadepopulacional2);
    printf("PIB per capta: %.2f\n", pibpercapta2);
    
    superpoder2 = (double) populacao2 + area2 + pib2 + pontosturisticos2 + densidadepopulacional2 + pibpercapta2;

    printf("Super poder: %.2f\n", superpoder2);


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
