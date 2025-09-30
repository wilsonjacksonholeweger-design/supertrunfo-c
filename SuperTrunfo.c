//Inclusão da biblioteca
#include <stdio.h>

//Função principal
int main(){

    //Estrutua das Cartas
    //Carta 1
    char estado;        //Uma letra de 'A' a 'H' (representando um dos oito estados)
    char codigo[4];        //A letra do estado seguida de um número de 01 a 04 (ex: A01, B03)
    char cidade[30];        //Nome da Cidade
    unsigned long int população;        //O número de habitantes
    float area;                // Área em km²
    float pib;                 // PIB em bilhões
    int pontos_turisticos;   // Número de pontos turísticos
    float densidade_populacionl; //Número de habitantes por km2
    float pib_per_capta;    //Riqueza média por pessoa
    float super_poder;

    //Carta 2
    char estado2;        //Uma letra de 'A' a 'H' (representando um dos oito estados)
    char codigo2[4];        //A letra do estado seguida de um número de 01 a 04 (ex: A01, B03)
    char cidade2[30];        //Nome da Cidade
    unsigned long int população2;        //O número de habitantes
    float area2;                // Área em km²
    float pib2;                 // PIB em bilhões
    int pontos_turisticos2;   // Número de pontos turísticos
    float densidade_populacionl2; //Número de habitantes por km2
    float pib_per_capta2;    //Riqueza média por pessoa
    float super_poder2;

    //Dados de entrada da carta 1
    printf("Insira os dados para a primeira carta \n");
    printf("Digite a letra do Estado: \n");
    scanf(" %c", &estado);      // espaço antes do %c para ignorar ENTER

    printf("Digite o código da carta: \n");
    scanf("%s", &codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade);

    printf("Digite a população: \n");
    scanf("%d", &população);

    printf("Digite a área em km²: \n");
    scanf("%f", &area);

    printf("Digite o PIB em bilhões: \n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos);


    //Dados de entrada da carta 2
    printf("Insira os dados para a segunda carta \n");
    printf("Digite a letra do Estado: \n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta: \n");
    scanf("%s", &codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade2);

    printf("Digite a população: \n");
    scanf("%d", &população2);

    printf("Digite a área km²: \n");
    scanf("%f", &area2);

    printf("Digite o PIB em bilhões: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos2);

    //Cálculo da densidade populacional
    densidade_populacionl = (float) população / area;
    densidade_populacionl2 = (float) população2 / area2;

    //Cálculo do PIB per Capta
    pib_per_capta = (float) (pib * 1000000000.0) / população;
    pib_per_capta2 = (float) (pib2 * 1000000000.0) / população2;

    //Cálculo do Super Poder
    super_poder = população + area + pib + pontos_turisticos + pib_per_capta + (1.0 / densidade_populacionl);
    super_poder2 = população2 + area2 + pib2 + pontos_turisticos2 + pib_per_capta2 + (1.0 / densidade_populacionl2);

    //Saída das cartas cadastradas

    printf("\n Cartas Cadastradas \n");
    //Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", população);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacionl);
    printf("PIB per Capta: %.2f reais\n", pib_per_capta);

    //Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", população2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacionl2);
    printf("PIB per Capta: %.2f reais\n", pib_per_capta2);

    // Comparações
    printf("\nComparação de Cartas:\n");

    printf("População: Carta %d venceu (%d)\n", (população > população2) ? 1 : 2, (população > população2));
    printf("Área: Carta %d venceu (%d)\n", (area > area2) ? 1 : 2, (area > area2));
    printf("PIB: Carta %d venceu (%d)\n", (pib > pib2) ? 1 : 2, (pib > pib2));
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", (pontos_turisticos > pontos_turisticos2) ? 1 : 2, (pontos_turisticos > pontos_turisticos2));
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidade_populacionl < densidade_populacionl2) ? 1 : 2, (densidade_populacionl < densidade_populacionl2));
    printf("PIB per Capita: Carta %d venceu (%d)\n", (pib_per_capta > pib_per_capta2) ? 1 : 2, (pib_per_capta > pib_per_capta2));
    printf("Super Poder: Carta %d venceu (%d)\n", (super_poder > super_poder2) ? 1 : 2, (super_poder > super_poder2));

    

    return 0;

}