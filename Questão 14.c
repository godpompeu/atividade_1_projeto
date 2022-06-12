#include <stdio.h>
#include <stdlib.h>
int opcao;

int main()
 {
   do{
    printf("Insira o angulo: ");
    float angulo;
    scanf("%f", &angulo);
    float pi = 3.14159265359;
    float result = angulo * pi / 180;

    printf("a conversao de angulo para radiano e: %0.2f", result);

    printf("\n1 - Digitar outro valor\n2 - Sair\n");
    scanf("%d", &opcao);
   }while(opcao != 2);

    return 0;
    }