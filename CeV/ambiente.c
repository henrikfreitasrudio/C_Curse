#include <stdio.h>

int main(){
    int n;
    printf("Digite um numero: ");
    fflush(stdin);
    scanf("%i", &n);
    switch (n){
        case 1:
            printf("Um");
            break;
        case 2:
            printf("Dois");
            break;
        case 3:
            printf("Tres");
            break;
        case 4:
            printf("Quatro");
            break;
        default:
            printf("\nACABOU!");
            break;
    }
}
