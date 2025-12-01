//Conversão de Temperatura
//Leia uma temperatura em graus Celsius e converta para Fahrenheit.
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    int f, c;
    
        printf("Qual é a temperatura em Celsius? ");
        scanf("%d", &c);

        f = 9 * c / 5 + 32;

        printf(" %d°C = %d°F", c, f);

    system("pause");
    return 0;
}