//Escreva um programa que leia uma data e informe se a data é válida ou não.
#include <stdio.h>
int main(){
    int dia, mes, ano;
    printf("Digite o dia");
    scanf("%i", &dia);
    printf("Digite o mês");
    scanf("%i", &mes);
    printf("Digite o ano");
    scanf("%i", &ano);
    printf("%i/%i/%i\n", dia, mes, ano);
    if ((dia==29)&(mes==2))
    {
        printf("Data válida, ano bissexto");
    }
    else if ((dia>31)||(mes>12)||(ano>9999)||(dia<1)||(mes<1)||(ano<1))
    {
        printf("Inválido");
    }
    else{
        printf("Data Válida");
    }
    return 0;
}