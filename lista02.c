//Área do Retângulo
//Leia a base e a altura de um retângulo e calcule sua área.

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){

    float base, altura, area;

    setlocale(LC_ALL, "portuguese");

    printf("Digite a base do retângulo: ");
    scanf("%f", &base);

    printf("Digite a altura do retângulo: ");
    scanf("%f", &altura);

    area = base * altura;

    printf("A área do retângulo é: %.2f", area);

    system("pause");
    return 0;
}