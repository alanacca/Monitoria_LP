//9. Ler uma sequência de números inteiros e determinar se eles são pares ou não. 
//Deverá ser informado o número de dados lidos e número de valores pares.
// O processo termina quando for digitado o número 1000.

#include <stdio.h>

int main(void){
    printf("Digite valores inteiro para verificar a quantidades de numeros pares digitados. Digite 1000 para encerar.\n");
    int qtd_entrada = 0;
    scanf("%d",&qtd_entrada);
    int entrada=0;
    int contador_lidos = 0;
    int contador_pares = 0;
	
    while(entrada != 1000){
        scanf("%d",&entrada);
        contador_lidos +=1;
        if(entrada %2==0 &&  entrada!= 1000){
            contador_pares += 1;
        }
    }

    printf("Numeros Lidos: %d\nNumeros Pares: %d", contador_lidos, contador_pares);
    
    return 0;
}