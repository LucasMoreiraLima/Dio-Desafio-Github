//Implemente um programa em c que faça o cálculo do somatório de um número dado pelo usuário. Ex: n=5; 5+4+3+2+1=15.
#include <stdio.h>

int main(){
    int vv, c, h;
    printf("digite um numero");
    scanf("%i", &vv);
    for (c=vv; c!=0; c--)
    {
        h+=c;
    }
    printf("somatorio:%i", h);
    return 0;
}