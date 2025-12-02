//Verificar Múltiplo de 5
//Leia um número e informe se ele é múltiplo de 5.

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");

int multiplo, n;

    printf("Informe um número para saber se é um múltiplo de 5: \n");
    scanf(" %d", &n);

    printf("\nM U L T I P L O");
    printf("\n=============\n");
    
    multiplo = n % 5;

    if(multiplo == 0){
    printf("O número %d é múltiplo de 5", n);
    }else{
        printf("O número %d não é múltiplo de 5", n);
    }
    
    printf("\n=============\n\n\n");

   system("pause");
}