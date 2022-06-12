#include <stdio.h>
#include <stdlib.h>
int opcao;
int main()
 {
   do{

    printf("Insira a velocidade por milhas : ");
    float milhas;
    scanf("%f", &milhas);
    float distancia_em_quilometros = 1.61 * milhas;

    printf("A conversao de milhas pra quilometros: %0.2f", distancia_em_quilometros);
    
    printf("\n1 - Digitar outro valor\n2 - Sair\n");
    scanf("%d", &opcao);
   }while(opcao != 2);

    return 0;
    }