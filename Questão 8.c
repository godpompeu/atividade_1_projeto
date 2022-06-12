#include <stdio.h>
#include <stdlib.h>
int opcao;
int main()
 {
   do{
    printf("Insira a temperatura em grau Kelvin : ");
    float Kelvin;
    scanf("%f", &Kelvin);

    float Celsius = Kelvin - 273.15;

    printf("A conversao de temperatura Kelvin pra Celsius : %0.2f", Celsius);

printf("\n1 - Digitar outro valor\n2 - Sair\n");
    scanf("%d", &opcao);
   }while(opcao != 2);

    return 0;
    }