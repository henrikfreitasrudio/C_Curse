#include <stdio.h>
#include <math.h>

float CalculaArea(float n1, float n2){
    float area;
    area = n1 * n2;
    return(area);
}

void main(){
    struct dados{
        int tipo;
        float comp, largura;
    };

    struct dados casa;

    printf("Informe o tipo da casa: ");
    fflush(stdin);
    scanf("%i", &casa.tipo);
    printf("\nLargura: ");
    fflush(stdin);
    scanf("%f", &casa.largura);
    printf("\nComprimento: ");
    fflush(stdin);
    scanf("%f", &casa.comp);

    float comp = casa.comp;
    float largura = casa.largura;

    calculaArea(largura, comp);

    printf("O valor da area e: %f", CalculaArea);
}
