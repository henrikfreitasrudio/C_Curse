#include <stdio.h>

void main(){
    printf("<<< EX021 - Oposto e inverso >>>\n\n");
    
    float num;

    printf("Digite um numero positivo ou negativo: \n");
    fflush(stdin);
    scanf("%f", &num);
    
    if (num < 0){
        int res = num * (-1);
        printf("Calculando o OPOSTO = %i", res);
    }
    else{
        float inv = 1 / num;
        printf("Calculando o INVERSO = %.2f", inv);
    }
}