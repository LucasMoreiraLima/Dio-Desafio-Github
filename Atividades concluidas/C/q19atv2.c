//Dado um número inteiro e positivo N, exibir o valor de seu fatorial (N!)
#include <stdio.h>
int main(){
    int n;
    printf("Digite um número");
    scanf("%i", &n);
    for(int i = 1; i <= n; i++){
        printf("(%i!), %i * %i = %i\n", n, n, i, n*i);
    }
}