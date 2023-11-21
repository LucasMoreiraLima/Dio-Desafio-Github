//Dados 20 números, exibir a média aritmética dos números pares e a média aritmética dos números ímpares
#include <stdio.h>
int main(){
	float nn, nn2, c1, c2;
    for(int i = 1; i <= 20; i++){
            printf("Digite Um número: \n");
            int n2;
            scanf("%i", &n2);
            if((n2%2)==0){
                nn+=n2;
                c1+=1;
            }
            else{
                nn2+=n2;
                c2+=1;
            }
        }
    printf("Media Par: %f, Media Impar: %f\n", nn/c1, nn2/c2);	
    }