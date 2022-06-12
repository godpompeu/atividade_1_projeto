#include <stdio.h>
#include <stdlib.h>
int opcao;
int main()
 {
   do{
    printf("Insira a temperatura em grau fahrenheit : ");
    float fahrenheit;
    scanf("%f", &fahrenheit);

    float celsius = 5.0 * (fahrenheit - 32.0)/9.0;

    printf("A conversao de temperatura Fahrenheit pra Celsius: %0.2f", celsius);

printf("\n1 - Digitar outro valor\n2 - Sair\n");
    scanf("%d", &opcao);
   }while(opcao != 2);

    return 0;
    }