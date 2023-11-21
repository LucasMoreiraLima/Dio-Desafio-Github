/*Fazer um algoritmo que dados dois números e um caractere. O caractere será uma opção escolhida pelo usuário de como manipular os dois números. O algoritmo deverá
exibir o menu de opções abaixo:
--------------------------------------------------
MENU
--------------------------------------------------
A – Maior Número
B – Menor Número
C – Média Aritmética
D – Finalizar
--------------------------------------------------*/
#include <stdio.h>
int main(){
	int maior, menor, nn, i;
	char n;
    while(n!='D'){
        for( i = 1; i <= 2; i++){
                printf("Digite um número: \n");
                int n2;
                scanf("%i", &n2);
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
        printf("--------------------------------------------------\nMENU\n--------------------------------------------------\nA – Maior Número\nB – Menor Número\nC – Média Aritmética\nD – Finalizar\n--------------------------------------------------\n");
        printf("Escolha uma Opção: ");
        scanf("%s", &n);
        if(n=='A'){
            printf("Maior: %i\n", maior);	
        }
        else if(n=='B'){
            printf("Menor: %i\n", menor);	
        }
        else if(n=='C'){
            printf("Média: %i\n", nn/2);	
        }
    }
}