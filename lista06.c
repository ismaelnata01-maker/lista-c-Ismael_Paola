//Nome e Idade
//Leia o nome e a idade de uma pessoa e exiba as informações formatadas.
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
   
    char nome[50];
    int idade;
   
    setlocale(LC_ALL, "portuguese");

    printf("Digite o seu nome: ");
    scanf(" %s", &nome);
   
    printf("Digite a sua idade: ");
    scanf(" %d", &idade);
   
    printf("Seu nome é %s e você tem %d anos.", nome, idade);

    system("pause");
    return 0;
}