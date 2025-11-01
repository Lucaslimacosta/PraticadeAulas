#include <stdio.h>

int main(){

    char nome[200];
    int idade;
    float altura;
    float peso;

     /*
    ESTRUTURA printf:
    printf("formato1 %formato2 %formato3, variavel1, variavel2, variavel3");
    %d: Número inteiro em formato decimal;
    %i: Equivalente a %d;
    %f: Número com ponto flutuante em formato normal.
    %e: Número de ponto flutuante com notação ciêntífica.
    %c: Imprime um único caractere.
    %s: Imprime uma cadeia (string) de caracteres.
    */

    /*
    printf("A idade de %s é: %d\n", nome, idade);
    printf("Sua altura é: %.2f\n", altura);
    printf("E ele pesa: %.2f\n", peso);
    */

    /*ESTRUTURA scanf:
    scanf("formato1" "formato2", "&variavel1", "&variavel2...);
    printf vem no início para solicitar o prompt de usuário:
    */
  printf("Qual seu nome: ");
    scanf("%s", nome);

    printf("Então você é o(a): %s\n", nome);

    printf("E quantos anos você tem: ");
    scanf("%d", &idade);

    printf("Então você se chama %s e você tem %d anos de idade.\n", nome, idade);

    printf("E qual sua altura (no lugar da virgula coloque ponto)? ");
    scanf("%f", &altura);

    printf("E qual seu peso (no lugar da virgula coloque ponto)? ");
    scanf("%e", &peso);

    printf("\nVAMOS AOS DADOS!\n");
    printf("--------------------------\n");
    printf("Dados do usuário:\n");
    printf("Nome: %s\n", nome);
    printf("Idade: %d anos\n", idade);
    printf("Altura: %.2f m\n", altura);
    printf("Peso: %.2f kg\n", peso);
    printf("--------------------------\n");

    return 0;




}