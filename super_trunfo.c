#include <stdio.h>

int main() {
    char estado1[50], estado2[50],nome_cidade1[50], nome_cidade2[50], codigo1[3], codigo2[3];
    int pop1, pop2, area1, area2, pontos_tur1, pontos_tur2;
    float area_km1, area_km2, pib1, pib2;


    // ---------------dados da primeira carta---------------------
    //estado
    printf("Digite o nome do estado da primeira carta: ");
    scanf("%s", estado1);
    
    //cod carta
    printf("Digite o codigo da primeira carta: ");
    scanf("%s", codigo1);
    
    //nome
    printf("Digite o nome da cidade da primeira carta: ");
    scanf("%s", nome_cidade1);

    //pop
    printf("Digite a populacao da primeira carta: ");
    scanf("%d", &pop1);

    //area
    printf("Digite a area da primeira carta: ");
    scanf("%d", &area1);

    //pib
    printf("Digite o pib da primeira carta: ");
    scanf("%f", &pib1);

    //num pontos tur
    printf("Digite o numero de pontos turisticos da primeira carta: ");
    scanf("%d", &pontos_tur1);

}