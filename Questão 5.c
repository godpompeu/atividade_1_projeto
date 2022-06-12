#include <stdio.h>
#include <stdlib.h>
int opcao;
int main()
 {
   do{
    printf("Insira um numero 1: ");
    float num1;
    scanf("%f", &num1);

    float soma = num1 / 5;

    printf("A quinta parte do numero e: %0.2f\n", soma);

printf("\n1 - Digitar outro valor\n2 - Sair\n");
    scanf("%d", &opcao);
   }while(opcao != 2);

    return 0;
    }