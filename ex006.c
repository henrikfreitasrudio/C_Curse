#include <stdio.h>

void main(){
    int n = 0;
    printf("Digite um numero: \n");
    scanf("%d", &n);
    printf("Analisando o numero %d, seu antecessor e %d e seu sucessor e %d", n, n - 1, n + 1);
}