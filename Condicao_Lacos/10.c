//10. Faça um algoritmo que encontre o primeiro múltiplo de 11, 13 ou 17 após um número dado.

#include <stdio.h>

int main(void){

    printf("Digite um numero inteiro para ponto de inicio da busca por multiplos de 11, 13, ou 17\n");

    int temp = 0;
    int flag = 1;
    //flag = 1 verdadeiro
    //flag = 0 falso

    scanf("%d",&temp);   
    
    while (flag==1){
        temp +=1;
        if(temp%11==0 || temp%13==0 || temp%17==0){
            flag = 0;
        }
    }
    
    printf("Multiplo encontrado: %d",temp);

    return 0;
}
