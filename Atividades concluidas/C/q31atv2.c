/*No dia da estreia do filme “Senhor dos Anéis”, uma grande emissora de TV realizou
uma pesquisa logo após o encerramento do filme. Cada espectador respondeu a um
questionário no qual constava sua idade e sua opinião em relação ao filme: excelente –
3; bom – 2; regular – 1. Criar um algoritmo que receba a idade a opinião de N espectadores, calcular e exibir:
• A quantidade de pessoas em cada opinião;
• A média da idade das pessoas em cada opinião;
• A porcentagem de resposta para cada opinião.*/
#include <stdio.h>
int main() {
    int f1, f2, f3, c1, c2, c3, i=1, idade, peso;
    while(idade!=0||peso!=0) {
        printf("Digite a idade e a opnião da pessoa %d:\n", i);
        scanf("%i %i", &idade, &peso);
        if(peso == 3){
            c1 += idade;
            f1++;
        } else if(peso == 2){
            c2 += idade;
            f2++;
        } else if(peso == 1){
            c3 += idade;
            f3++;
        }
        i++;
    }
    printf("Quantidade: %i, Média %.2f, Porcentagem: %0.2f%%\n",f1,(float)c1/f1,(float)f1/i);
    printf("Quantidade: %i, Média %.2f, Porcentagem: %0.2f%%\n",f2,(float)c2/f2,(float)f2/i);
    printf("Quantidade: %i, Média %.2f, Porcentagem: %0.2f%%\n",f3,(float)c3/f3,(float)f3/i);
    return 0;
    
}