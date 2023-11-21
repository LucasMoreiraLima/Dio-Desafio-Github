//Entrar com o nome, idade e sexo de 20 pessoas. Exibir o nome da pessoa se ela for do sexo masculino e tiver mais que 21 anos
#include <stdio.h>
int main(){
    char nome[90], sexo;
    int idade;
    for(int i=1; i <= 20; i++){
        printf("Digite o Nome, Idade e Sexo(M ou F)\n");
        scanf("%20s %i %c", nome, &idade, &sexo);
        if((idade>21)&(sexo="M")){
            printf("%s\n", nome);
        }
    }
}