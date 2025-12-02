//Regras de Desconto por Idade e Sexo
//Mulheres com mais de 40 anos recebem desconto;
//homens com mais de 50 anos também recebem desconto.
//Leia idade e sexo e informe se a pessoa tem direito ao desconto.
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    char sexo;
    int idade;

    printf("QUAL A IDADE: \n");
    scanf("%d", &idade);
    printf("DIGITE (M) PARA MASCULINO E (F) PARA FEMININO: \n");
    scanf(" %c", &sexo);

    if(sexo == 'M'){
        if(idade >= 50){
            printf("tem direito ao desconto. \n");
        }else{
            printf("não tem direito ao desconto. \n");
        }
    }else{
        if(idade >= 40){
            printf("tem direito ao desconto. \n");
        }else{
            printf("não tem direito ao desconto. \n");
        }
    }

    system("pause");
    return 0;
}