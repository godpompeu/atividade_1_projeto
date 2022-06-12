#include <stdio.h>
#include <stdlib.h>
int opcao;
int main()
 {
   do{
    printf("Insira um número 1: ");
    int num1;
    scanf("%d", &num1);

    int soma = num1 * num1;

    printf("o quadrado do numero e: %d", soma);

printf("\n1 - Digitar outro valor\n2 - Sair\n");
    scanf("%d", &opcao);
   }while(opcao != 2);

    return 0;
    }