#include <stdio.h>
int main()

{
    //Variaveis carta1
    int numCarta1=1;
    char letra1[3];
    char cidade1[40];
    int numPopulacao1;
    float area1;
    float pib1;
    int pontoT1;
    float densPopulacional1;
    float pibperc1;


    //variaveis Carta2
    int numCarta2=2;
    char letra2[3];
    char cidade2[40];
    int numPopulacao2;
    float area2;
    float pib2;
    int pontoT2;
    float densPopulacional2;
    float pibperc2;

    //Informações da primeira carta
    printf("Digite a letra do estado da carta %i\n", numCarta1);
    scanf("%s", letra1);

    printf("Digite o nome da primeira cidade\n");
    scanf(" %[^\n]", cidade1);

    printf("Digite o numero da populacao da cidade de %s\n", cidade1);
    scanf("%i", &numPopulacao1);

    printf("Informe a area total da cidade de %s\n", cidade1);
    scanf("%f", &area1);

    printf("Informe o PIB da cidade de %s\n", cidade1);
    scanf("%f", &pib1);

    printf("Informe o numero de pontos turistico de %s\n", cidade1);
    scanf("%i", &pontoT1);

    printf("\n");
    //Informações da segunda carta
    printf("Digite a letra do estado da carta %i\n", numCarta2);
    scanf("%s", letra2);

    printf("Digite o nome da segunda cidade\n");
    scanf(" %[^\n]", cidade2);

    printf("Digite o numero da populacao da cidade de %s\n", cidade2);
    scanf("%i", &numPopulacao2);

    printf("Informe a area total da cidade de %s\n", cidade2);
    scanf("%f", &area2);

    printf("Informe o PIB da cidade de %s\n", cidade2);
    scanf("%f", &pib2);

    printf("Informe o numero de pontos turistico de %s\n", cidade2);
    scanf("%i", &pontoT2);

    //calculando a desnsidade populacional das cartas
    densPopulacional1 = (float)numPopulacao1/area1;
    densPopulacional2 = (float)numPopulacao2/area2;

    //Calculando o Pib per capita das cartas
    pibperc1 = (float)pib1/numPopulacao1;
    pibperc2 = (float)pib1/numPopulacao2;

    // Exibição das cartas
    printf("\n\n");
    printf("=====RESPOSTAS=====\n");

    printf("Carta %i:\n", numCarta1);
    printf("Letra do Estado: %s\n", letra1);
    printf("Codigo: %s%02d\n", letra1, numCarta1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("Populacao total: %i\n", numPopulacao1);
    printf("Area total: %f Km²\n", area1);
    printf("PIB Total: %f Bilhores de reais\n", pib1);
    printf("Pontuacao Turistica: %i\n", pontoT1);
    printf("Densidade populacional: %f hab/Km2\n", densPopulacional1);
    printf("Pib per Capita: %f reais\n", pibperc1);

    printf("\n\n");

    printf("Carta %i:\n", numCarta2);
    printf("Letra do Estado: %s\n", letra2);
    printf("Codigo: %s%02d\n", letra2, numCarta2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("Populacao total: %i\n", numPopulacao2);
    printf("Area total: %f Km²\n", area2);
    printf("PIB Total: %f Bilhoes de reais\n", pib2);
    printf("Pontuacao Turistica: %i\n", pontoT2);
    printf("Densidade populacional: %f hab/Km2\n", densPopulacional2);
    printf("Pib per Capita: %f reais\n", pibperc2);


    return 0;
}
