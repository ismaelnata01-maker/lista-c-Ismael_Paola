//Função Soma de Três Valores
//Crie uma função que recebe três números e retorna a soma deles.
//No programa principal, leia três valores e mostre o resultado.
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    
    float n1, n2,n3, res_Soma;
    
    setlocale(LC_ALL, "portuguese");

    printf("Digite o primeiro número: ");
    scanf("%f", &n1);

    printf("Digite o segundo número: ");
    scanf("%f", &n2);
    
    printf("Digite o terceiro número: ");
    scanf("%f", &n3);

    res_Soma = n1 + n2 + n3;

    printf("A soma dos 3 números é: %.2f", res_Soma);

    system("pause");
    return 0;
}