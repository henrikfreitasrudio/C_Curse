#include <stdio.h>

void main(){
    printf("<<<  EX014 - Operadores de Deslocamento  >>>");
    int num = 0, desl = 0;
    printf("\nDigite um numero: ");
    fflush(stdin);
    scanf("%i", &num);
    printf("\nDigite o deslocamento: ");
    fflush(stdin);
    scanf("%i", &desl);
    printf("\n------ OPERACOES SHIFT ------");
    printf("\nCalculando %i >> %i = %i", num, desl, num >> desl);
    printf("\nCalculando %i << %i = %i", num, desl, num << desl);
}