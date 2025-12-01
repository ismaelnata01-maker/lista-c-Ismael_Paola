//Média de Peso
//Leia o peso de duas pessoas e calcule a média dos dois valores.

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){

    float peso1, peso2, media;

    setlocale(LC_ALL, "portuguese");

    printf("Digite o primeiro peso: ");
    scanf("%f", &peso1);

    printf("Digite o segundo peso: ");
    scanf("%f", &peso2);

    media = (peso1 + peso2) / 2;

    printf("Média = %.2f", media);

    system("pause");
    return 0;
}