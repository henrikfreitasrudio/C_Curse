#include <stdio.h>
#include <time.h>

void main(){
    printf("<<< EX019 - Ano Bissexto >>>\n\n");
    int ano;
    printf("Informe o ano: ");
    fflush(stdin);
    scanf("%i", &ano);
    if (ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0){
        printf("O ano %i e um Bissexto!", ano);
    } else{
        printf("O ano %i nao e um Bissexto!", ano);
    }
    printf("\nFim");
}