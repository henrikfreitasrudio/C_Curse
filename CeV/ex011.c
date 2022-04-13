#include <stdio.h>

void main(){
    printf("<<<  EX011 - Par ou Impar  >>>\n");
    int num = 0;
    printf("Informe um numero: ");
    fflush(stdin);
    scanf("%i", &num);
    printf("O numero %i digitado e %s.", num, (num % 2 == 0)?"PAR":"IMPAR");
}