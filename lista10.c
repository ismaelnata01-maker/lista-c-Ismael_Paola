//Comparar Idades
//Leia a idade de duas pessoas e informe
//qual delas é mais velha ou se possuem a mesma idade.
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    int age1, age2;

    printf("INFORME A PRIMEIRA IDADE: ");
    fflush(stdin);
    scanf("%d", &age1);

    printf("INFORME A SEGUNDA IDADE: ");
    fflush(stdin);
    scanf("%d", &age2);

    printf("\n");

    if(age1 > age2){
        printf("A PRIMEIRA PESSOA É A MAIS VELHA, COM %d ANOS", age1);
    }else if(age2 > age1){
        printf("A SEGUNDA PESSOA É A MAIS VELHA, COM %d ANOS", age2);
    }else{
        printf("AS IDADES SÃO AS MESMAS");
    }

    system("pause");
    return 0;
}