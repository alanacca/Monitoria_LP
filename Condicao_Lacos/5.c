//5. Escreva um algoritmo que pede o período do aluno e retorna as cadeiras que ele deveria fazer(utilizando o comando switch).

#include <stdio.h>

int main(){
    printf("Digite o numero do seu periodo");
    int num;
    scanf("%d", &num);
    switch(num){
        case 1:
            printf("algoritmo\ncalculo 1\ncalculo vetoria");
        break;
        case 2:
            printf("linguagem de programacao\ncalculo 2\nalgebra linear");
        break;
        default:
            printf("Desconhecido");
        break;
    }
    return 0;
}