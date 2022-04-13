#include <stdio.h>

void main(){
    printf("<<< EX027 - Tres valores em ordem crescente >>>\n\n");
    printf("Me informe 3 valore que eu colocarei em ordem para voce...\n");
    int n1, n2, n3;
    printf("Primeiro valor: ");
    fflush(stdin);
    scanf("%i", &n1);
    printf("Segundo valor: ");
    fflush(stdin);
    scanf("%i", &n2);
    printf("Terceiro valor: ");
    fflush(stdin);
    scanf("%i", &n3);
    printf("-------------------------\n");
    if (n1 > n2 && n1 > n3){
        printf("MAIOR: %i\n", n1);
        if (n2 > n3){
            printf("INTERMEDIARIO: %i\n", n2);
            printf("MENOR: %i\n", n3);
        }
        else{
            printf("INTERMEDIARIO: %i\n", n3);
            printf("MENOR: %i\n", n2);
        }
    }
    else if (n2 > n1 && n2 > n3){
        printf("MAIOR: %i\n", n2);
        if (n1 > n3){
            printf("INTERMEDIARIO: %i\n", n1);
            printf("MENOR: %i\n", n3);
        }
        else{
            printf("INTERMEDIARIO: %i\n", n3);
            printf("MENOR: %i\n", n1);
        }
    }
    else{
        printf("MAIOR: %i\n", n3);
        if (n2 > n1){
            printf("INTERMEDIARIO: %i\n", n2);
            printf("MENOR: %i\n", n1);
        }
        else{
            printf("INTERMEDIARIO: %i\n", n1);
            printf("MENOR: %i\n", n2);
        }
    }
    printf("-------------------------\n");
}