#include <stdio.h>

int main() {
    char estado1, estado2;       
    char codigo1[20], codigo2[20];
    char cidade1[20], cidade2[20];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int p_turisticos1, p_turisticos2;

    // Entrada de dados para cidade 1
    printf("digite o estado1: \n");
    scanf(" %c", &estado1);
    
    printf("digite o codigo1: \n");    
    scanf("%s", codigo1);

    printf("digite cidade1: \n");
    scanf("%s", cidade1);

    printf("digite populacao1: \n");
    scanf("%d", &populacao1);
    
    printf("digite area1: \n");
    scanf("%f", &area1);
    
    printf("digite pib1: \n");
    scanf("%f", &pib1); 

    printf("digite p_turisticos1: \n");
    scanf("%d", &p_turisticos1);

    // Entrada de dados para cidade 2
    printf("digite o estado2: \n");
    scanf(" %c", &estado2);

    printf("digite o codigo2: \n");    
    scanf("%s", codigo2);

    printf("digite cidade2: \n");
    scanf("%s", cidade2);

    printf("digite populacao2: \n");
    scanf("%d", &populacao2);
    
    printf("digite area2: \n");
    scanf("%f", &area2);

    printf("digite pib2: \n");
    scanf("%f", &pib2); 

    printf("digite p_turisticos2: \n");
    scanf("%d", &p_turisticos2);

    // Comparações entre as variáveis

    // Comparação de População
    if (populacao1 > populacao2) {
        printf("%s tem mais populacao que %s.\n", cidade1, cidade2);
    } else if (populacao2 > populacao1) {
        printf("%s tem mais populacao que %s.\n", cidade2, cidade1);
    } else {
        printf("As duas cidades têm a mesma populacao.\n");
    }

    // Comparação de Área
    if (area1 > area2) {
        printf("%s tem maior area que %s.\n", cidade1, cidade2);
    } else if (area2 > area1) {
        printf("%s tem maior area que %s.\n", cidade2, cidade1);
    } else {
        printf("As duas cidades tem a mesma area.\n");
    }

    // Comparação de PIB
    if (pib1 > pib2) {
        printf("%s tem um PIB maior que %s.\n", cidade1, cidade2);
    } else if (pib2 > pib1) {
        printf("%s tem um PIB maior que %s.\n", cidade2, cidade1);
    } else {
        printf("As duas cidades têm o mesmo PIB.\n");
    }

    // Comparação de Pontos Turísticos
    if (p_turisticos1 > p_turisticos2) {
        printf("%s tem mais pontos turisticos que %s.\n", cidade1, cidade2);
    } else if (p_turisticos2 > p_turisticos1) {
        printf("%s tem mais pontos turisticos que %s.\n", cidade2, cidade1);
    } else {
        printf("As duas cidades têm o mesmo número de pontos turisticos.\n");
    }

       printf("A cidade vencedora e: %s\n",cidade1 );

    return 0;
}