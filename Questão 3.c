#include <stdio.h>
#include <stdlib.h>
int opcao;
int main()
 {
   do{
    printf("Insira um número 1: ");
    int num1;
    scanf("%d", &num1);

    printf("Insira um número 2: ");
    int num2;
    scanf("%d", &num2);

    printf("Insira um número 3: ");
    int num3;
    scanf("%d", &num3);

    int soma = num1 + num2 + num3;

    printf("A soma dos números e: %d", soma);

printf("\n1 - Digitar outro valor\n2 - Sair\n");
    scanf("%d", &opcao);
   }while(opcao != 2);

    return 0;
    }