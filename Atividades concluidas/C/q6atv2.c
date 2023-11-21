//Entrar com N números, exibir a metade e a raiz cúbica de cada número. Onde o valor N é dado também pelo usuário
#include <stdio.h>
int main(){
    float i, c;
    int en;
    printf("Digite quantos números serão executados: \n");
    scanf("%i", &en);
    for (i = 1; i <= en; i++)
    {
        printf("\nDigite um número: ");
        scanf("%f", &c);
        printf("\nMetade:%.1f", c/2);
        for (float i2 = 1; i2 <= c; i2++)
        {
            if ((i2*i2*i2)==c)
            {
                printf("\nRaiz:%.1f",i2);
            }
        }
    }
    return 0;
}