#include <stdio.h>

void main(){
    printf("<<<  EX010 - Preco do Produto  >>>\n");
    char produto[20];
    float valor = 0, desc = 0;
    printf("Produto: ");
    fflush(stdin);
    gets(produto);
    printf("Preco de %s: R$", produto);
    fflush(stdin);
    scanf("%f", &valor);
    printf("Desconto: (%%) ");
    fflush(stdin);
    scanf("%f", &desc);
    float vFinal = valor - (valor * desc / 100);
    printf("O produto %s custava R$%.2f, mas com %.1f%% de desconto, passa a custar R$%.2f", produto, valor, desc, vFinal);
}