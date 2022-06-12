#include <stdio.h>
#include <stdlib.h>

int opcao;

int main()
 {
   do{
    printf("Insira a temperatura em grau Celsius : ");
    float celsius;
    scanf("%f", &celsius);

    float temp = celsius * 9/5 +32;

    printf("A conversao de temperatura Celsius pra Fahrenheit: %0.2f", temp);

    printf("\n1 - Digitar outro valor\n2 - Sair\n");
    scanf("%d", &opcao);
   }while(opcao != 2);

    return 0;
    }