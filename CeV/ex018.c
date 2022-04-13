#include <stdio.h>
#include <time.h>

void main(){
    time_t t;
    time(&t);
    struct tm *data;
    data = localtime(&t);
    int ano = data->tm_year + 1900;

    int nasc = 0;
    printf("<<< EX018 - Servico Militar >>>\n\n");
    printf("Atualmente estamos no ano %i.\n", ano);
    printf("Em que ano voce nasceu? ");
    scanf("%i", &nasc);
    int idade = ano - nasc;
    printf("---------------------------------------------------\n");
    printf("Sua idade e de %i anos.\n", idade);
    if (idade > 18){
        printf("Voce ja tem mais de 18 anos. Ja deveria ter se alistado!\n");
    }else if (idade < 18){
        printf("Voce ainda nao tem 18 anos. Nao pode se alistar!\n");
    }else{
        printf("Voce tem 18 anos! Precisa se alistar urgentemente!!");
    }
    printf("---------------------------------------------------\n");
}