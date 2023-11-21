//Escreva um número que escreva meia árvore de natal com asteriscos. O n° de ramos deve ser informado pelo usuário.
#include<stdio.h>
int main(){
    int en, i, i2;
    printf("Digite um número: ");
    scanf("%i", &en);
    for (i = 1; i <= en; i++)
    {
        for (i2 = 1; i2 <= i; i2++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
    }