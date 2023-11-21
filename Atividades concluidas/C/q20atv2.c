/*Fazer um algoritmo que exiba os 20 primeiros termos da série de FIBONACCI. A série
de FIBONACCI começa com os números 1 e 1, os restantes são calculados a partir da
soma dos dois anteriores a ele. Exemplo: 1, 1, 2, 3, 5, 8, 13, 21, 34*/
#include <stdio.h>
int main(){
    int a=1, s=1;
    for(int i = 1; i <= 20; i++){
        int n = a+s;
        printf("FIBONACCI: %i + %i = %i\n", a, s, n);
        a=s;
        s=n;
    }
}