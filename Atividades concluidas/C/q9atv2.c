//Dado um número inteiro e positivo, exibir sua tabuada de multiplicar
#include<stdio.h>
int main(){
    int en, i;
    printf("Digite um numero: ");
    scanf("%i", &en);
    for (i = 0; i <= 10; i++)
    {
        printf("%i * %i = %i\n", en, i, i*en);
    }
    return 0;
}