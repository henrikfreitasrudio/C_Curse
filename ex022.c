#include <stdio.h>
#include <time.h>

void main(){
    //Para buscar a hora do sistema
    time_t t;
    time(&t);
    struct tm *hora;
    hora = localtime(&t);
    int h = hora->tm_hour;

    float carteira = 0;
    int filme = 12;
    printf("<<< EX022 - Da para ver o filme? >>>\n\n");
    printf("================ CINEMA FREITAS ===============\n");
    printf("HORARIO DO FILME: 12h - PRECO DO INGRESSO: R$20\n");
    printf("-----------------------------------------------\n");
    printf("Agora sao %i:00 horas.\n\n", h);
    printf("Quanto de dinheiro voce tem? R$");
    fflush(stdin);
    scanf("%f", &carteira);
    
    if (carteira >= 20 && hora <= filme){
        printf("Voce consegue comprar o ingresso!\n");
        printf("Faltam %i horas para comecar o filme.", filme - h);
    }
    else{
        printf("Nao sera possivel comprar o ingresso! Volte outro dia.\n\n");
    }
}