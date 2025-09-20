#include <stdio.h>
int main()

{
    //Variaveis carta1
    int numCarta1=1;
    char letra1[3];
    char cidade1[40];
    unsigned long int numPopulacao1;
    float area1;
    float pib1;
    int pontoT1;
    float densPopulacional1;
    float pibperc1;
    float super1;


    //variaveis Carta2
    int numCarta2=2;
    char letra2[3];
    char cidade2[40];
    unsigned long int numPopulacao2;
    float area2;
    float pib2;
    int pontoT2;
    float densPopulacional2;
    float pibperc2;
    float super2;

    //Veriaveis comparadas
    int numPopulacaoV;
    int areV;
    int pibV;
    int pontoTV;
    int densPopulacionalV;
    int pibpercV;
    int superV;

    int comparacao;

    int opcao;// varialvel menu switch

    //Informações da primeira carta
    printf("Digite a letra do estado da carta %i\n", numCarta1);
    scanf("%s", letra1);

    printf("Digite o nome da primeira cidade\n");
    scanf(" %[^\n]", cidade1);

    printf("Digite o numero da populacao da cidade de %s\n", cidade1);
    scanf("%lu", &numPopulacao1);

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
    scanf("%lu", &numPopulacao2);

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
    pibperc2 = (float)pib2/numPopulacao2;

    //Calculando o SUPER PORDERRRRR
    super1=numPopulacao1+area1+pib1+pontoT1+pibperc1+(1/densPopulacional1);
    super2=numPopulacao2+area2+pib2+pontoT2+pibperc2+(1/densPopulacional2);


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
    printf("SUPER PODER TOTAL: %.2f\n", super1);

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
    printf("SUPER PODER TOTAL: %.2f\n", super2);

    /* COMPARAÇÃO SIMPLES
    printf("\n\n****COMBATE DAS CARTAS***\n");

    printf("Vencedor do atributo POPULACAO TOTAL: 1-Carta1 | 0-Carta2 \n");
    numPopulacaoV = numPopulacao1 > numPopulacao2;
    printf(">>> %i <<<\n", (int)numPopulacaoV);
    printf("Vencedor do atributo AREA TOTAL: 1-Carta1 | 0-Carta2 \n");
    areV = area1 > area2;
    printf(">>> %i <<<\n", (int)areV);
    printf("Vencedor do atributo PIB TOTAL: 1-Carta1 | 0-Carta2 \n");
    pibV = pib1 > pib2;
    printf(">>> %i <<<\n", (int)pibV);
    printf("Vencedor do atributo PONTUACAO TURISTICA: 1-Carta1 | 0-Carta2 \n");
    pontoTV = pontoT1 > pontoT2;
    printf(">>> %i <<<\n", (int)pontoTV);
    printf("Vencedor do atributo DENSIDADE POPULACIONAL: 1-Carta1 | 0-Carta2 \n");
    densPopulacionalV = (1/densPopulacional1) > (1/densPopulacional2);
    printf(">>> %i <<<\n", (int)densPopulacionalV);
    printf("Vencedor do atributo PIB PER CAPITA: 1-Carta1 | 0-Carta2 \n");
    pibpercV = pibperc1 > pibperc2;
    printf(">>> %i <<<\n", (int)pibpercV);
    printf("Vencedor do atributo SUPER PODER!!!!): 1-Carta1 | 0-Carta2 \n");
    superV = super1 > super2;
    printf(">>> %i <<<\n", (int)superV);
    */

    // Menu de escolha de atributo feiro com o Switch
    printf("\n\n**** Escolha o atributo para comparacao entre as cartas: ****\n");
    printf("1- Populacao.\n2- Area.\n3- PIB.\n4- Densidade Populacional.\n5- PIB Per Capita.\n\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        {
            //Comparacao por Populacao
            printf("RESULTADO:\n");
            printf("Populacao Cidade %s: %i \n", cidade1, numPopulacao1);
            printf("Populacao Cidade %s: %i \n", cidade2, numPopulacao2);

            if(numPopulacao1 > numPopulacao2)
            {
                printf("Populacao de %s e a vencedora!\n",cidade1);
            }
            else if (numPopulacao1 < numPopulacao2)
            {
                printf("Populacao de %s e a vencedora!\n",cidade2);
            }
            else if (numPopulacao1 == numPopulacao2)
            {
                printf("Empate!");
            }
        break;
        }
    case 2:
        {
            //Comparacao por Area
            printf("RESULTADO:\n");
            printf("Area Cidade %s: %f \n", cidade1, area1);
            printf("Area Cidade %s: %f \n", cidade2, area2);

            if(area1 > area2)
            {
                printf("Area de %s e a vencedora!\n",cidade1);
            }
            else if (area1 < area2)
            {
                printf("Area de %s e a vencedora!\n",cidade2);
            }
            else if(area1 == area2)
            {
                printf("Empate!");
            }
        break;
        }
    case 3:
        {
            //Comparacao por PIB

            printf("RESULTADO:\n");
            printf("PIB Cidade %s: %f \n", cidade1, pib1);
            printf("PIB Cidade %s: %f \n", cidade2, pib2);

            if(pib1 > pib2)
            {
                printf("PIB de %s e a vencedora!\n",cidade1);
            }
            else if (pib1 < pib2)
            {
                printf("PIB de %s e a vencedora!\n",cidade2);
            }
            else if (pib1 == pib2)
            {
                printf("Empate!");
            }
        break;
        }
    case 4:
        {
            //Comparacao por densidade populacional

            printf("RESULTADO:\n");
            printf("Densidade populacional Cidade %s: %f \n", cidade1, densPopulacional1);
            printf("Densidade populacional Cidade %s: %f \n", cidade2, densPopulacional2);

            if(densPopulacional1 > densPopulacional2)
            {
                printf("Densidade populacional de %s e a vencedora!\n",cidade2);
            }
            else if (densPopulacional1 < densPopulacional2)
            {
                printf("Densidade populacional de %s e a vencedora!\n",cidade1);
            }
            else if (densPopulacional1 == densPopulacional2)
            {
                printf("Empate!");
            }
        break;
        }
    case 5:
        {
            //Comparacao por Pib Per Capita

            printf("RESULTADO:\n");
            printf("PIB Per Capita Cidade %s: %f \n", cidade1, pibperc1);
            printf("PIB Per Capiya Cidade %s: %f \n", cidade2, pibperc2);

            if(pibperc1 > pibperc2)
            {
                printf("PIB Per Capita de %s e a vencedora!\n",cidade1);
            }
            else if (pibperc1 < pibperc2)
            {
                 printf("PIB Per Capita de %s e a vencedora!\n",cidade2);
            }
            else if(pibperc1 == pibperc2)
            {
                printf("Empate!");
            }
        break;
        }
    default:
        {
            printf("Opcaoo Invalida");
        }
        break;
    }

    return 0;
}
