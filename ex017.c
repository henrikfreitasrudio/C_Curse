#include <stdio.h>
#include <time.h>

void main(){
    printf("<<< EX017 - Fila de Banco >>>\n\n");
    int ano = 0, nasc = 0, idade = 0;
    
    //Descobrir o ano atual
    time_t t;
    time(&t);
    struct tm *data;
    data = localtime(&t);
    ano = data->tm_year + 1900; //ano atual

    printf("Em que ano voce nasceu? ");
    fflush(stdin);
    scanf("%i", &nasc);
    idade = ano - nasc;
    printf("------------------------------------------------------------------\n");
    printf("Voce tem %i anos, correto? ", idade);
    printf("Seja Bem-Vindo(a) ao Banco Estudonauta!\n");
    if (idade >= 65) printf("============ ATENCAO! DIRIJA-SE PARA FILA PREFERENCIAL ===========\n");
    printf("------------------------------------------------------------------\n");
}