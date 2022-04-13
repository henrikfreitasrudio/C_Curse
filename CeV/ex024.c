#include <stdio.h>

void main(){
    printf("<<< EX024 - Ordem em dois numeros >>>\n\n");
    printf("Me diga dois valores que eu colocarei em ordem crescente...\n");
    int n1, n2;
    printf("Primeiro valor: ");
    fflush(stdin);
    scanf("%i", &n1);
    printf("Segundo valor: ");
    fflush(stdin);
    scanf("%i", &n2);
    printf("Os numeros em ordem sao ");
    if (n1 > n2){
        printf("%i e %i", n1, n2);
    }
    else if (n2 > n1){
        printf("%i e %i", n2, n1);
    }
    else{
        printf("A MESMA!");
    }
}