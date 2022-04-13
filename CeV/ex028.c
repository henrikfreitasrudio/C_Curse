#include <stdio.h>

void main(){
    printf("<<< EX028 - Super Calculadora v1.0 >>>\n\n");
    int n1, n2;
    printf("VALOR 1: ");
    fflush(stdin);
    scanf("%i", &n1);
    printf("VALOR 2: ");
    fflush(stdin);
    scanf("%i", &n2);

    printf("======================\n");
    printf("+ \tAdicao\n");
    printf("- \tSubtracao\n");
    printf("* \tMultiplicacao\n");
    printf("/ \tDivisao\n");
    printf("======================\n");
    
    char op;

    printf("Digite sua opcao => ");
    fflush(stdin);
    scanf("%c", &op);

    printf("----------------------------------------------------\n");
    switch (op){
        case '+':
            printf("O resultado de %i + %i = %i\n", n1, n2, (n1 + n2));
            break;
        case '-':
            printf("O resultado de %i - %i = %i\n", n1, n2, (n1 - n2));
            break;
        case '*':
            printf("O resultado de %i x %i = %i\n", n1, n2, (n1 * n2));
            break;
        case '/':
            printf("O resultado de %i / %i = %.2f\n", n1, n2, (float)n1 / n2);
        default:
            printf("Operador nao encontrado!\n");
            break;
    }
    printf("----------------------------------------------------\n");
    printf("Volte Sempre!");
}