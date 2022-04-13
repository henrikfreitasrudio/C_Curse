#include <stdio.h>

void main(){
    printf("<<< EX012 - Situacao do Aluno >>>\n");
    float n1 = 0, n2 = 0;
    printf("Informe a primeira nota: \n");
    fflush(stdin);
    scanf("%f", &n1);
    printf("Informe a segunda nota: \n");
    fflush(stdin);
    scanf("%f", &n2);
    float media = (n1 + n2) / 2;
    printf("A media do aluno e %.1f\n", media);
    printf("A situacao do aluno e %s.", (media >= 7)?"APROVADO":"REPROVADO");
}