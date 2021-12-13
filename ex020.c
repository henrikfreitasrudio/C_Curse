#include <stdio.h>

void main(){
    printf("<<< EX020 - Preco de Passagem\n\n");
    printf("========= TABELA DE PRECOS =========\n");
    printf("Viagens ate 200km \tR$0.50/km\n");
    printf("A partir de 200km \tR$0.35/km\n");
    printf("------------------------------------\n");   
    int km; 
    float valor, preco;
    printf("Informe a distancia de viagem em Km: ");
    fflush(stdin);
    scanf("%i", &km);

    if (km <= 200){
        valor = 0.50;
    }
    else{
        valor = 0.35;
    }
    preco = km * valor;
    printf("Uma viagem de %i km vai custar R$%.2f por KM.\nO valor total sera de R$%.2f\n", km, valor, preco);
    printf("------------------------------------");
}