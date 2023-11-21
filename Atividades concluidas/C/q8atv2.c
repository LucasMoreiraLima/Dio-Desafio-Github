//Fazer uma tabela de conversão de polegadas para centímetros. Deseja-se que a tabela tenha valores desde 1 a 20 polegadas
#include<stdio.h>
int main(){
    float i, v;
    for(i=1; i <= 20; i++){
        v = i * 2.54;
        printf("\nPolegadas %.0f, CM: %.2f", i,v);
    }
    return 0;
}