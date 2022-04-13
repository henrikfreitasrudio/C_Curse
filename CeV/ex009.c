#include <stdio.h>

void main(){
    printf("<<<  EX009 - Media do Aluno  >>>\n\n");
    char nome[20];
    float n1 = 0, n2 = 0, media = 0;
    printf("Informe o nome do aluno: ");
    fflush(stdin);
    gets(nome);
    printf("\nNota 1: ");
    fflush(stdin);
    scanf("%f", &n1);
    printf("\nNota 2: ");
    fflush(stdin);
    scanf("%f", &n2);
    media = (n1 + n2) / 2;
    printf("\nO aluno %s tirou as notas %.2f e %.2f e ficou com a media %.2f", nome, n1, n2, media);
}