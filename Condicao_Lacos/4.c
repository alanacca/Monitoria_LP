#include <stdio.h>
int main(void){
    printf("Digite uma letra para imprimi-la maiuscula\n");
    char letra;
    scanf("%c", &letra);

    printf("%c" ,letra-32);

    return 0;
}