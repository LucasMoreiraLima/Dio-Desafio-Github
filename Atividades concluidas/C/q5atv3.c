//Escreva um programa que leia um número e exiba a tabuada deste número.*
#include <stdio.h>
int main(){
    int en, i;
    printf("Digite um número: ");
    scanf("%i", &en);
    for (i = 0; i <= 10; i++)
    {
        printf("%i * %i = %i\n", en, i, i*en);
    }
    return 0;
}