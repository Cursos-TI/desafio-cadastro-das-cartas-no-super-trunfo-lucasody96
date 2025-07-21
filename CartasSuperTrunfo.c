#include <stdio.h>
#include <string.h>

int main() {

    char estado1, estado2; //Definindo as váriaveis de estado.
    char codigoCarta1[4], codigoCarta2[4]; // Definindo as variáveis do código da carta
    char nomeCidade1[50], nomeCidade2[50]; //Definindo as varíaveis do nome da cidade
    int populacao1, populacao2; //Definindo as váriaveis da população.
    float area1, area2; //Definindo as váriaveis de área.
    double pib1, pib2;//Definindo as váriaveis do PIB.
    int quantPontosTuristicos1, quantPontosTuristicos2; //Definindo a quantidade de pontos turísticos.
    //Variáveis do desafio aventureiro
    float densidadePopulacional1, densidadePopulacional2; //Definindo as variáveis de densidade populacional
    float pibPerCapita1, pibPerCapita2;//Definindo as variáveis de PIB per Capita

    //Inserção dos dados pelo usuário
    printf("Bem vindo ao jogo Super Trunfo - Estados!\n");// Como foi solicitado variáveis referentes ao estado e não ao país, ajustei a introdução do desafio
    printf("\n"); //deixando um espaço para uma leitura mais fluída do usuário
    printf("Para começarmos, vamos realizar o cadastro das cartas que mostrarão os dados dos estados\n");
    printf("\n");

    //Bloco de dados informados pelo usuário para a primeira carta
    printf("Primeiramente, vamos realizar o cadastro da primeira carta.\n");

    printf("Digite uma letra de A a H que representa um dos 8 estados: ");
    scanf(" %c", &estado1);

    printf("Escreva a letra do estado seguida de um número de 01 a 04 (Exemplo: A01, B03): ");
    scanf("%3s", codigoCarta1);

    // Bloco que permite que o nome possa ser com espaço após o primeiro nome
    //Consumir o '\n' deixado pelo scanf anterior
    getchar();
    printf("Digite o nome da cidade: ");
    fgets(nomeCidade1, 50, stdin);
    // Remover o caractere de nova linha '\n' ao final
    nomeCidade1[strcspn(nomeCidade1, "\n")] = '\0';

    printf("Informe o número de habitantes da cidade: ");
    scanf("%d",&populacao1);
    
    printf("Informe a área da cidade em quilômetros quadrados: ");
    scanf("%f", &area1);

    printf("Informe o PIB (Produto Interno Bruto) da cidade: ");
    scanf("%lf", &pib1);// Na leitura do PIB, se variável double.

    printf("Informe a quantidade de pontos turísticos da cidade: ");
    scanf("%i", &quantPontosTuristicos1);
    printf("\n");

    //Bloco de dados informados pelo usuário para a segunda carta
    printf("Agora, vamos realizar o cadastro da segunda carta.\n");

    printf("Digite uma letra de A a H que representa um dos 8 estados: ");
    scanf(" %c", &estado2);

    printf("Escreva a letra do estado seguida de um número de 01 a 04 (Exemplo: A01, B03): ");
    scanf("%3s", codigoCarta2);

    // Bloco que permite que o nome possa ser com espaço após o primeiro nome
    //Consumir o '\n' deixado pelo scanf anterior
    getchar();
    printf("Digite o nome da cidade: ");
    fgets(nomeCidade2, 50, stdin);
    // Remover o caractere de nova linha '\n' ao final
    nomeCidade2[strcspn(nomeCidade2, "\n")] = '\0';

    printf("Informe o número de habitantes da cidade: ");
    scanf("%d",&populacao2);
    
    printf("Informe a área da cidade em quilômetros quadrados: ");
    scanf("%f", &area2);

    printf("Informe o PIB (Produto Interno Bruto) da cidade: ");
    scanf("%lf", &pib2);// Na leitura do PIB, se variável double

    printf("Informe a quantidade de pontos turísticos da cidade: ");
    scanf("%i", &quantPontosTuristicos2);
    printf("\n");

    printf("Segue abaixo a impressão dos dados cadastrados das duas cartas: \n");
    printf("\n");

    //Cálculo da Densidade populacional
    densidadePopulacional1 = (float)populacao1/area1;
    densidadePopulacional2 = (float)populacao2/area2;

    //Cálculo do Pib Per Capita
    pibPerCapita1 = (float)pib1/populacao1;
    pibPerCapita2 = (float)pib2/populacao2;

    //Impressão dos dados da carta 1
    printf("Carta 1: \n");
    printf("Estado: %c\n", estado1);
    printf("Código da carta: %s\n", codigoCarta1);
    printf("Nome da cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: %.2f de reais\n", pib1);
    printf("Quantidade de pontos turísticos: %d\n", quantPontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("\n");

    //Impressão dos dados da carta 2
    printf("Carta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %s\n", codigoCarta2);
    printf("Nome da cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: %.2f de reais\n", pib2);
    printf("Quantidade de pontos turísticos: %d\n", quantPontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0;
}
