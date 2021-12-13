#include <stdio.h>

void main(){
    printf("<<< EX023 - Positivo ou Negativo >>>\n\n");
    int n;
    printf("Informe um numero: ");
    fflush(stdin);
    scanf("%i", &n);
    printf("O valor %i digitado e: ", n);
    if (n < 0){
        printf("NEGATIVO!");
    }
    else if (n > 0){
        printf("POSITIVO!\n");
    }
    else{
        printf("NULO");
    }
}