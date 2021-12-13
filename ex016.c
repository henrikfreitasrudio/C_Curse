#include <stdio.h>

void main(){
    printf("<<< EX016 - Consumidor ganha desconto >>>\n");
    float tot = 0, desc = 0;
    printf("Qual foi o total das compras? R$");
    fflush(stdin);
    scanf("%f", &tot);
    printf("-----------------------------------------------------\n");
    printf("Voce comprou R$%.2f na nossa loja\n", tot);
    if (tot >= 500){
        desc = (tot * 10 / 100);
        printf("==========ATENCAO=========\n");
        printf("Por fazer mais de R$500 em compras, voce vai receber R$%.2f de desconto.\n", desc);
    }
    printf("O valor total a ser pago sera de R$%.2f! Volte sempre!\n", tot - desc);
    printf("----------------------------------------------------------------------\n");
}