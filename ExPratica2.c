#include <stdio.h>

int main() {
    int idade,matricula;
    float altura;
    char nome[50];

    printf("Digite o seu nome: \n");
    scanf("%49s", nome);

    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    printf("Digite sua altura(usando ponto '.' no lugar da virgula): \n");
    scanf("%f", &altura);

    printf("Digite sua matricula: \n");
    scanf("%i", &matricula);

    printf("Nome do aluno: %s - Matrícula: %d \n", nome, matricula);
    printf("Idade: %d - Altura: %.2f", idade, altura);

    return 0;
}