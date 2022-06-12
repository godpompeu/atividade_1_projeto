#include <stdio.h>
#include <stdlib.h>
int opcao;
int main()
 {
    do{
    float num;
    printf("Insira um numero real: ");
    scanf("%f", &num);
    printf("O numero digitado e: = %0.2f \n", num);

printf("\n1 - Digitar outro valor\n2 - Sair\n");
    scanf("%d", &opcao);
   }while(opcao != 2);

return 0;
}