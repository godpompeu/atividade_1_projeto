#include <stdio.h>
#include <stdlib.h>
int opcao;

int main()
   {
 do{
    printf("insira a distancia em quilometro para ser convertida em milhas : ");
    float distancia_em_quilometro;
    scanf("%f", &distancia_em_quilometro);
    float milhas = distancia_em_quilometro / 1.61 ;

    printf("a conversao da distancia para ser convertida em milhas e: %0.2f", milhas);

    printf("\n1 - Digitar outro valor\n2 - Sair\n");
    scanf("%d", &opcao);
   }while(opcao != 2);

    return 0;
    }