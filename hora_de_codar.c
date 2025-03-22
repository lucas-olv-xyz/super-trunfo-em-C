#include <stdio.h>

int main () {
    int idade, matricula;
    float altura;
    char nome[50];

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite sua matricula: ");   
    scanf("%d", &matricula);
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("Nome do aluno: %s - matricula: %d\n", nome,matricula);
    printf("Idade: %d - altura: %f\n", idade, altura);
    return 0;
}