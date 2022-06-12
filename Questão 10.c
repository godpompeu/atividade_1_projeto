#include <stdio.h>
#include <stdlib.h>
int opcao;
int main()
 {
do{
    printf("Insira a velocidade por quilometro por_h : ");
    float km_por_hora;
    scanf("%f", &km_por_hora);
    float metros_por_segundo = km_por_hora / 3.6;

 printf("A conversao de quilometro por_h pra metros por s: %0.2f", metros_por_segundo);

 printf("\n1 - Digitar outro valor\n2 - Sair\n");
    scanf("%d", &opcao);
   }while(opcao != 2);   
    
    return 0;
    }