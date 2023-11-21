//Dados os números inteiros A e B, fazer um algoritmo que calcule 𝐴 exponenciado b
#include<stdio.h>
int main(){
    int en, i, v;
    v=1;
    printf("Digite dois numeros: ");
    scanf("%i %i", &en, &i);
    for(int i2=1; i2 <= i; i2++){
        v = v*en;
    }
    printf("Valor: %i", v);
    return 0;
}