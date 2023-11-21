//Entrar com dez números, exibir a metade e a raiz cúbica de cada número.
#include <stdio.h>
int main(){
    float i, c;
    for (i = 1; i <= 10; i++)
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