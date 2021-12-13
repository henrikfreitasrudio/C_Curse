#include <stdio.h>
void main(){
    printf("<<< EX013 - Operadores Bitwise >>>\n");
    int valor1 = 0, valor2 = 0; 
    printf("Digite o primeiro valor :");
    fslush(stdin);
    scanf("%i", &valor1);
    printf("\nDigite op segundo valor: ");
    fflush(stdin);
    scanf("%i", &valor2);
    printf("----- OPERACOES BITWISE -----\n");
    printf("Calculando %i $ %i e igual a %i.\n", valor1, valor2, valor1 & valor2);
    printf("Calculando %i | %i e igual a %i.\n", valor1, valor2, valor1 | valor2);
    printf("Calculando %i ^ %i e igual a %i.\n", valor1, valor2, valor1 ^ valor2);
}