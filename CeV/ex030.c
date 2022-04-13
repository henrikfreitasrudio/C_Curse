#include <stdio.h>

void main(){
    printf("<<< EX030 - Preco por Epoca >>>\n\n");
    float preco, preco_novo;
    int opcao;

    printf("Informe o preco de um produto: R$");
    fflush(stdin);
    scanf("%f", &preco);
    printf("\n\t      ESCOLHA UM PERIODO\n");
    printf("\t==============================\n");
    printf("\t1\tCarnaval [+10]\n");
    printf("\t2\tFerias Escolares [+20]\n");
    printf("\t3\tDia das Criancas [+5]\n");
    printf("\t4\tBlack Friday [-30]\n");
    printf("\t5\tNatal [-5]\n");
    printf("\t==============================\n");
    
    printf("\tDigite sua opcao => ");
    fflush(stdin);
    scanf("%i", &opcao);

    printf("----------------------------------------------------------------\n");
    switch (opcao){
        case 1:
            preco_novo = preco + (preco * 10 / 100);
            printf("Na epoca de Carnaval, o preco aumenta de R$%.2f para R$%.2f.", preco, preco_novo);
            break;
        case 2:
            preco_novo = preco + (preco * 20 / 100);
            printf("Nas ferias escolares, o preco aumenta de R$%.2f para R$%.2f.", preco, preco_novo);
            break;
        case 3:
            preco_novo = preco + (preco * 5 / 100);
            printf("No dia das criancas, o preco aumenta de R$%.2f para R$%.2f.", preco, preco_novo);
            break;
        case 4:
            preco_novo = preco - (preco * 30 / 100);
            printf("Na Black Friday, o preco reduz de R$%.2f para R$%.2f.", preco, preco_novo);
            break;
        case 5:
            preco_novo = preco - (preco * 5 / 100);
            printf("No natal, o preco diminui de R$%.2f para R$%.2f", preco, preco_novo); 
            break;
        default:
            printf("Em tempos como este, o preco prevalete o mesmo, sendo R$%.2f", preco);
            break;
    }
    printf("\n----------------------------------------------------------------\n\n");
    printf("VOLTE SEMPRE!!!\n\n"); 
}