#include <stdio.h>

void main(){
    printf("<<<  EX015 - BONS ALUNOS MERECEM PARABENS\n");
    float n1 = 0, n2 = 0, media = 0;
    printf("Informe a primeira nota: ");
    fflush(stdin);
    scanf("%f", &n1);
    printf("Informe a segunda nota: ");
    fflush(stdin);
    scanf("%f", &n2);
    media = (n1 + n2) / 2;
    printf("------------------------------------------------------\n");
    if (media >= 7){
        printf("MEUS PARABENS! ");
    }
    printf("Sua media final foi de %.2f\n", media);
    printf("------------------------------------------------------\n");
}