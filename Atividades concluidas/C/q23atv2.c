//Entrar com as idades de 20 pessoas. Exibir a média aritmética das idades, a maior idade e menor idade.
#include <stdio.h>
int main(){
	int maior, menor, nn, i;
    for(i = 1; i <= 20; i++){
            printf("Digite a idade: \n");
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
    printf("Maior: %i, Menor: %i, Média: %i\n", maior, menor, nn/2);	
    }