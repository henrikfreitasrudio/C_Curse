#include <stdio.h>

void main(){
    printf("<<< EX029 - Seu peso nos Planetas v1.0 >>>\n");
    float peso, peso_2;
    int op;

    printf(" Seu peso na Terra (Kg) = ");
    fflush(stdin);
    scanf("%f", &peso);
    printf("\n\t   ESCOLHA O PLANETA\n");
    printf("\t=======================\n");
    printf("\t1\tMercurio\n");
    printf("\t2\tVenus\n");
    printf("\t3\tMarte\n");
    printf("\t4\tJupiter\n");
    printf("\t5\tSaturno\n");
    printf("\t6\tUrano\n");
    printf("\t7\tNetuno\n");
    printf("\t=======================\n");

    printf("Digite sua opcao => ");
    fflush(stdin);
    scanf("%i", &op);
    printf("\n------------------------------------------------\n");
    switch (op){
        case 1:
            peso_2 = peso * 0.37;
            printf("No planeta Mercurio, seu peso seria de %.2f KG\n", peso_2);
            break;
        case 2:
            peso_2 = peso * 0.88;
            printf("No planeta Venus, seu peso seria de %.2f KG\n", peso_2);
            break;
        case 3:
            peso_2 = peso * 0.38;
            printf("No planeta Marte, seu peso seria de %.2f KG\n", peso_2);
            break;
        case 4: 
            peso_2 = peso * 2.64;
            printf("No planeta Jupiter, seu peso seria de %.2f KG\n", peso_2);
            break;
        case 5:
            peso_2 = peso * 1.15;
            printf("No planeta Saturno, o seu peso seria de %.2f KG\n", peso_2);
            break;
        case 6:
            peso_2 = peso * 1.17;
            printf("No planeta Urano, o seu peso seria de %.2f KG\n", peso_2);
            break;
        case 7:
            peso_2 = peso * 1.18;
            printf("No planeta Netuno, o seu peso seria de %.2f KG.\n", peso_2);
            break;
        default:
            printf("Opcao invalida!\n");
            break;
    }
    printf("------------------------------------------------\n\n");
}