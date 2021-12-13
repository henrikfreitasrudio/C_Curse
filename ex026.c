#include <stdio.h>

void main(){
    printf("<<< EX026 - Qual e seu estado? >>>\n\n");
    
    char cidade[2];
    printf("Em que estado do Brasil voce nasceu? ");
    fflush(stdin);
    gets(cidade);
    printf("%s", cidade);
    if (cidade == "ES"){
        printf("Quem nasce em %s e chamado de ESPIRITO SANTENSE.", cidade);
    }
    else if (cidade == "SP"){
        print("Quem nasce em %s e chamado de SAO PAULINO.", cidade);
    }
    else if (cidade == "RJ"){ 
        printf("Quem nasce em %s e chamado de CARIOCA.", cidade);
    }
    else if (cidade == "TO"){
        printf("Quem nasce em %s e chamado de TUCANO.", cidade);
    }
    else{
        printf("Nascendo em %s voce e natural da sua cidade, mas ainda nao sei como te chamar!", cidade);
    }
}