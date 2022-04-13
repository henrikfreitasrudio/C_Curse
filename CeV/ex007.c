#include <stdio.h>

void main(){
    int num = 0;
    printf("Informe um numero: \n");
    scanf("%i", &num);
    int dobro = num * 2;
    float terca = num / 3.0;
    printf("Analisando o numero %i, o dobro e %i e a terca parte e %.2f", num, dobro, terca);
}