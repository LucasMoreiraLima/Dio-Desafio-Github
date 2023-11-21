//Dados N números digitados pelo usuário, exibir o somatórios deles. Onde o valor N é dado também pelo usuário
#include <stdio.h>
int main(){
    int n, nn;
    printf("Quantos números serão digitados? ");
    scanf("%i", &n);
    for(int i = 1; i <= n; i++){
        printf("Digite um número: \n");
        int n2;
        scanf("%i", &n2);
        nn += n2;
    }
    printf("Somatório: %i", nn);
}