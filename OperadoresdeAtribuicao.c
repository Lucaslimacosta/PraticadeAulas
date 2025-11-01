#include <stdio.h>

int main(){
    /*
    Atribuição Simples = 
    Atribuição com Soma +=
    Atribuição com Subtração -= 
    Atribuição com Multiplicação *=
    Atribuição com Divisão /=
    */

    int numero1, numero2, resultado;

    resultado = 10;
    printf("Resultado: %d\n", resultado);


    
    resultado += 25;
    printf("Resultado: %d\n", resultado);
    //resultado = resultado + 25;

    resultado -= 15;
    printf("Resultado: %d\n", resultado);
    //resultado = resultado - 15;


    resultado *= 5;
    printf("Resultado: %d\n", resultado);
    //resultado = resultado * 5;

    resultado /= 2;
    printf("Resultado: %d\n", resultado);
    //resultado = resultado / 2;
}