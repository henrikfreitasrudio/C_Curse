#include <stdio.h>
#include <time.h>

void main(){
    printf("<< EX025 - Servico Militar v2.0 >>>\n\n");

    time_t t;
    time(&t);
    struct tm *data;
    data = localtime(&t);
    int ano = data->tm_year + 1900;
    
    int nasc, idade;
    printf("Atualmente, estamos no ano %i.\n", ano);
    printf("Em que ano voce nasceu? ");
    fflush(stdin);
    scanf("%i", &nasc);
    idade = ano - nasc;
    printf("--------------------------------------------------------------------\n");
    printf("Sua idade e de %i anos.\n", idade);

    if (idade < 18){
        int restante = 18 - idade;
        int ano_alist = ano + restante;
        printf("Seu alistamento sera em %i. Ainda faltam %i anos.\n", ano_alist, restante);
    }
    else if (idade > 18){
        int exc = idade - 18;
        int anos_exd = ano - exc;
        printf("Seu alistamento foi em %i. Ja se passaram %i anos.\n", anos_exd, exc); 
    }
    else{
        printf("Voce completa %i anos exatamente em %i. Va se alistar imediatamente!\n", idade, ano);
    }
    printf("--------------------------------------------------------------------\n");
}