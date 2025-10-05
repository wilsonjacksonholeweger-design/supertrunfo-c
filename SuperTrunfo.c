//Inclusão da biblioteca
#include <stdio.h>

//Função principal
int main(){

    //Estrutua das Cartas
    //Carta 1
    char estado;        //Uma letra de 'A' a 'H' (representando um dos oito estados)
    char codigo[4];        //A letra do estado seguida de um número de 01 a 04 (ex: A01, B03)
    char cidade[30];        //Nome da Cidade
    unsigned long int populacao;        //O número de habitantes
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
    unsigned long int populacao2;        //O número de habitantes
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
    scanf("%lu", &populacao);

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
    scanf("%lu", &populacao2);

    printf("Digite a área km²: \n");
    scanf("%f", &area2);

    printf("Digite o PIB em bilhões: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos2);

    //Cálculo da densidade populacional
    densidade_populacionl = (float) populacao / area;
    densidade_populacionl2 = (float) populacao2 / area2;

    //Cálculo do PIB per Capta
    pib_per_capta = (float) (pib * 1000000000.0) / populacao;
    pib_per_capta2 = (float) (pib2 * 1000000000.0) / populacao2;

    //Cálculo do Super Poder
    super_poder = populacao + area + pib + pontos_turisticos + pib_per_capta + (1.0 / densidade_populacionl);
    super_poder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capta2 + (1.0 / densidade_populacionl2);

    //Saída das cartas cadastradas

    printf("\n Cartas Cadastradas \n");
    //Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %lu\n", populacao);
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
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacionl2);
    printf("PIB per Capta: %.2f reais\n", pib_per_capta2);

    // Comparações
    printf("\nComparação de Cartas:\n");

    //Comparação População
    printf("\nNo quesito População: \n");
    printf("Carta 1: %s, %lu\n", cidade, populacao);
    printf("Carta 2: %s, %lu\n", cidade2, populacao2);
    if( populacao > populacao2) {
        printf("A Carta 1 (%s) venceu!\n", cidade);
} else {
    printf("A Carta 2 (%s) venceu!\n", cidade2);
    }

    //Comparação Área
    printf("\nNo quesito Área: \n");
    printf("Carta 1: %s, %.2f\n", cidade, area);
    printf("Carta 2: %s, %.2f\n", cidade2, area2);
    if( area > area2) {
         printf("A Carta 1 (%s) venceu!\n", cidade);
} else {
    printf("A Carta 2 (%s) venceu!\n", cidade2);
    }

    //Comparação PIB
    printf("\nNo quesito PIB: \n");
    printf("Carta 1: %s, %.2f\n", cidade, pib);
    printf("Carta 2: %s, %.2f\n", cidade2, pib2);
    if( pib > pib2) {
         printf("A Carta 1 (%s) venceu!\n", cidade);
} else {
    printf("A Carta 2 (%s) venceu!\n", cidade2);
    }

    //Comparação Pontos Turisticos
    printf("\nNo quesito Pontos Turisticos: \n");
    printf("Carta 1: %s, %d\n", cidade, pontos_turisticos);
    printf("Carta 2: %s, %d\n", cidade2, pontos_turisticos2);
    if( pontos_turisticos > pontos_turisticos2) {
         printf("A Carta 1 (%s) venceu!\n", cidade);
} else {
    printf("A Carta 2 (%s) venceu!\n", cidade2);
    }

    //Comparação Densidade Populacional
    printf("\nNo quesito Densidade Populacional: \n");
    printf("Carta 1: %s, %.2f\n", cidade, densidade_populacionl);
    printf("Carta 2: %s, %.2f\n", cidade2, densidade_populacionl2);
    if( densidade_populacionl < densidade_populacionl2) {
         printf("A Carta 1 (%s) venceu!\n", cidade);
} else {
    printf("A Carta 2 (%s) venceu!\n", cidade2);
    }

    //Comparação PIB per Capta
    printf("\nNo quesito PIB per Capta: \n");
    printf("Carta 1: %s, %.2f\n", cidade, pib_per_capta);
    printf("Carta 2: %s, %.2f\n", cidade2, pib_per_capta2);
    if( pib_per_capta > pib_per_capta2) {
         printf("A Carta 1 (%s) venceu!\n", cidade);
} else {
    printf("A Carta 2 (%s) venceu!\n", cidade2);
    }

    //Comparação Super Poder
    printf("\nNo quesito Super Poder:\n");
    printf("Carta 1: %s, %.4f\n", cidade, super_poder);
    printf("Carta 2: %s, %.4f\n", cidade2, super_poder2);
    if (super_poder > super_poder2) {
        printf("A Carta 1 (%s) venceu!\n", cidade);
} else {
        printf("A Carta 2 (%s) venceu!\n", cidade2);
}

    

    return 0;

}