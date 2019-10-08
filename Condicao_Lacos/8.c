//8. Escreva um algoritmo que leia certa quantidade de números e imprima o maior deles e quantas vezes o maior número foi lido. A quantidade de números a serem lidos deve ser fornecida pelo usuário.

#include <stdio.h>
int main(void){
    printf("Digite a quantidade de numero a serem lidas\n");

    int qtd_loop;
    scanf("%d", &qtd_loop);

    printf("Digite %d numero\n", qtd_loop);
    int maior= 0;
    int numero=0;
    int contador = 0;
    
    for (int i=0; i<qtd_loop; i++){
        scanf("%d", &numero);
        if (numero>maior){
            maior = numero;
            contador = 1;
        }else if(numero == maior){
            contador +=1;
        }
    }
    printf("maior: %d; repeticoes:%d", maior, contador);
}