/*Entrar com os sexos de várias pessoas (m ou f). Exibir a quantidade de pessoas do
sexo masculino e a quantidade de pessoas do sexo feminino. O algoritmo termina
quando é digitado um sexo @*/
#include <stdio.h>
int main(){
    char sexo;
    int cm, cf;
    while(sexo!='@'){
        printf("Digite o sexo(M ou F): ");
        scanf("%c", &sexo);
        if(sexo == 'M' || sexo == 'm'){
            cm+=1;
        }
        else if(sexo == 'F' || sexo == 'f'){
            cf+=1;
        }
        printf("\nMasculino: %i, Feminino: %i", cm, cf);
    }
}