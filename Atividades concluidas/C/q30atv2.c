/*Dadas a idade e peso de 20 pessoas, exibir a média aritmética dos pesos das pessoas da
mesma faixa etária. As faixas etárias são: de 1 a 10 anos, de 11 a 20 anos, de 21 a 30
anos e maiores de 30 anos*/
#include <stdio.h>
int main() {
    int f1, f2, f3, f4=0, c1, c2, c3, c4=0;
    for (int i = 1; i <= 20; i++) {
        printf("Digite a idade e o peso da pessoa %d:\n", i);
        int idade, peso;
        scanf("%i %i", &idade, &peso);
        if(idade >= 1 && idade <= 10){
            c1 += peso;
            f1++;
        } else if(idade >= 11 && idade <= 20){
            c2 += peso;
            f2++;
        } else if(idade >= 21 && idade <= 30){
            c3 += peso;
            f3++;
        } else{
            c4 += peso;
            f4++;
        }
    }
    printf("Média da faixa etária de 1 a 10 anos: %.2f\n",(float)c1/f1);
    printf("Média da faixa etária de 11 a 20 anos: %.2f\n",(float)c2/f2);
    printf("Média da faixa etária de 21 a 30 anos: %.2f\n",(float)c3/f3);
    printf("Média da faixa etária acima de 30 anos: %.2f\n",(float)c4/f4);
    return 0;
}