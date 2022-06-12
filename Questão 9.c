#include <stdio.h>
#include <stdlib.h>
int opcao;
int main()
 {
   do{
    printf("Insira a temperatura em grau Celsius : ");
    float Celsius;
    scanf("%f", &Celsius);

    float Kelvin = Celsius - 273.15;

    printf("A conversao de temperatura Celsius pra Kelvin : %0.2f", Kelvin);

    printf("\n1 - Digitar outro valor\n2 - Sair\n");
    scanf("%d", &opcao);
   }while(opcao != 2);
   
    }