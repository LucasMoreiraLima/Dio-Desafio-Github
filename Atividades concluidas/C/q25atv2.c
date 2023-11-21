//Dado um número, exibir todos os seus divisores
#include <stdio.h>
int main(){
    int n;
    printf("Digite um Número");
    scanf("%i", &n);
    for(int i = 1; i <= n; i++){
        if((n%i)==0){
            printf("Divisor: %i\n", i);
        }
    }
}