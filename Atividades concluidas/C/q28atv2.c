/*Dados dois número inteiros, exibir o intervalo fechado do menor para o maior número. 
Obs.: o primeiro número digitado não precisa necessariamente ser menor que o segundo.*/
#include <stdio.h>
int main(){
    int n , nn;
    printf("Digite dois números: ");
    scanf("%i %i", &n, &nn);
    if (n>nn){
        for(int i = nn; i <= n; i++){
            printf("%i\n", i);
        }
    }
    else{
        for(int i = n; i <= nn; i++){
            printf("%i\n", i);
        }
    }
}