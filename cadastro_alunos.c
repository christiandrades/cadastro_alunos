#include <stdio.h>

int main()
{

    int idade, matricula;
    float altura;
    char nome[50];

    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    printf("Digite sua altura: \n");
    scanf("%f", &altura);

    printf("Digite sua nome: \n");
    scanf(" %[^\n]", nome);

    printf("Digite sua matricula: \n");
    scanf("%d", &matricula);

    printf("Nome do Aluno: %s\n - Matrícula: %d", nome, matricula);
    printf("\n - Idade: %d\n - Altura: %.2f", idade, altura);

    return 0;
}