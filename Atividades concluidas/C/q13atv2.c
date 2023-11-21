//Dados N números digitados pelo usuário, exibir o maior e o menor deles
#include <stdio.h>
int main(){
    int n, maior, menor;
    printf("Quantos números serão digitados? ");
    scanf("%i", &n);
    for(int i = 1; i <= n; i++){
        printf("Digite um número: \n");
        int n2;
        scanf("%i", &n2);
        if(i==1){
            menor = maior = n2;
        } 
        else if(n2 <= menor){
            menor = n2;
        }
        else if(n2 >= maior){
            maior = n2;
        }
    }
    printf("Maior: %i, Menor: %i", maior, menor);
}