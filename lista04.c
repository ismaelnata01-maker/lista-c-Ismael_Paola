//Cálculo de Desconto
//Leia o valor de um produto
// e aplique um desconto de 10%. Mostre o preço final.

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){

    float preco, desconto, preco_final;

    setlocale(LC_ALL, "portuguese");

    printf("Informe o preço de um produto: ");
    scanf("%f", &preco);

    desconto = preco / 10;
    preco_final = preco - desconto;

    printf("O desconto é de: %.2f", preco_final);

    system("pause");
    return 0;
}