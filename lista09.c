//Aprovado ou Reprovado
//Leia a nota de um aluno e informe se ele está aprovado (nota ≥ 6) ou reprovado.
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    
    float nota;
    
    setlocale(LC_ALL, "portuguese");

    printf("Digite a nota do aluno: ");
    scanf("%f", &nota);
    
    if(nota >= 6){
        printf("APROVADO, PARABÉNS.");
    }else{
        printf("REPROVADO, ESTUDE MAIS.");
    }

    system("pause");
    return 0;
}