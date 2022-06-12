#include <stdio.h>
#include <stdlib.h>

int opcao;
int main()
{
    do{
    printf("insira um numero: ");
    int num;
    scanf("%d", &num);
    printf("O numero digitado foi: %d", num);

printf("\n1 - Digitar outro valor\n2 - Sair\n");
    scanf("%d", &opcao);
   }while(opcao != 2);
    return 0;
}
