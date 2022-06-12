#include <stdio.h>
#include <stdlib.h>
int opcao;
int main()
 {
do{
    printf("Insira a velocidade por metros_por_segundo : ");
    float metros_por_segundo;
    scanf("%f", &metros_por_segundo);
    float km_por_h = metros_por_segundo * 3.6;

 printf("A conversao de metros_por_segundo pra km_por_h: %0.2f", km_por_h);
    
    printf("\n1 - Digitar outro valor\n2 - Sair\n");
    scanf("%d", &opcao);
   }while(opcao != 2);

    return 0;
    }