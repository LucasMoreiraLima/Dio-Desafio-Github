/*Dadas as idades de várias pessoas, exibir a menor idade, a maior idade e a média aritmética das idades.
O programa termina quando for digitada uma idade -1*/
#include <stdio.h>
int main(){
    int maior, menor, nn, n2, i;
    while(n2!=-1){
        i++;
        printf("Digite um número: \n");
        scanf("%i", &n2);
        if(n2 == -1){
            break;
        }
        nn+=n2;
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
    printf("Maior: %i, Menor: %i, Média: %i", maior, menor, nn/2);
}