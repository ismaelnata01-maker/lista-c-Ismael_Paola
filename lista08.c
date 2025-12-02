//Função Triplo
//Crie uma função que receba um número e retorne o triplo dele.
//No programa principal, leia um número e mostre o resultado usando essa função.
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){

 setlocale(LC_ALL, "portuguese");

    int triplo, n;

    printf("Informe um número para ser triplicado: \n");
    scanf(" %d", &n);

    printf("\nT R I P L O");
    printf("\n===========\n");
    
    triplo = n * 3;
 
    printf("O triplo de %d é: %d", n, triplo);

    printf("\n=============\n\n\n");

   system("pause");
}