//Dados 20 números, exibir quantos são impares e quantos são pares
#include <stdio.h>
int main(){
    int p, im;
    for(int i = 1; i <= 20; i++){
    int n;
    printf("Digite um Número");
    scanf("%i", &n);
        if((n%2)==0){
            p+=1;
        }
        else{
            im+=1;
        }
    }
    printf("Par: %i, Impar: %i", p, im);
}