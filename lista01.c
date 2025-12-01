//Conversão de Medidas
//Leia um valor em 
//metros e converta-o para centímetros. Mostre o resultado na tela.

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    
    float metro, cent;

    setlocale(LC_ALL, "portuguese");

    printf("Digite um número em metros: ");
    scanf("%f", &metro);

    cent = metro * 100;

    printf("O valor %.2f em metros = %.2f centímetros", metro, cent);

    system("pause");
    return 0;
}