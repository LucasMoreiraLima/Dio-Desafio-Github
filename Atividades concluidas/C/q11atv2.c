//Entrar com dois números que indiquem o limite inferior e superior de um intervalo. Exibir os números impares entre o intervalo.
#include <stdio.h>
int main(){
    int n , nn;
    printf("Digite dois números: ");
    scanf("%i %i", &n, &nn);
    if (n>nn){
        for(int i = nn; i <= n; i++){
            if((i%2)==1){
            printf("%i\n", i);
            }
        }
    }
    else{
        for(int i = n; i <= nn; i++){
            if((i%2)==1){
            printf("%i\n", i);
            }
        }
    }
}