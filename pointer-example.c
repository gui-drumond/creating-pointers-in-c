#include <stdio.h>

int main()
{
    int idade;
    int * P_idade;
    printf(" Digite o valor da variável idade \n");
    scanf("%i", &idade);
    
    P_idade = &idade;
    
    printf("Endereço na memória da variável idade %p \n", P_idade);
    printf("Imprimir o valor referenciado da memória da idade com o valor da variável %d \n", *P_idade);
    
    return 0;
}
