#include <stdio.h>

void main(){
    char letra;
    printf("Digite uma letra: \n");
    letra = getchar();
    printf("Antes da letra %c temos a letra %c. E depois temos a letra %c.", letra, (letra - 1), (letra + 1));
} 