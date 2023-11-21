//Entrar com números positivos e exibir se cada número é par ou ímpar. O algoritmo termina quando é digitado -1
#include <stdio.h>
int main(){
    int n1, n2;
    while(n1!=-1||n2!=-1){
        printf("Digite dois números: ");
        scanf("%i %i", &n1, &n2);
        if((n1%2)==1){
            if((n2%2)==0){
                printf("Impar: %i, Par: %i", n1, n2);
            }
            else if((n2%2)==1){
                printf("Impar: %i, Impar: %i", n1, n2);
            }
        }
        else if((n1%2)==0){
            if((n2%2)==0){
                printf("Par: %i, Par: %i", n1, n2);
            }
            else if((n2%2)==1){
                printf("Par: %i, Impar: %i", n1, n2);
            }
        }
    }
}