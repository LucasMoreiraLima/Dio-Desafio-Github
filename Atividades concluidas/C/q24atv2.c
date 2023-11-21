//Entra com o nome e as três notas de 20 alunos. Exibir o nome, a média e a situação do aluno: aprovado, de final o reprovado
#include <stdio.h>
int main() {
    char nome[50];
    for (int i = 1; i <= 20; i++) {
        printf("Digite o Nome: \n");
        scanf("%s", nome);
        printf("Digite as notas: \n");
        int n1, n2, n3;
        scanf("%i %i %i", &n1, &n2, &n3);
        int media = (n1 + n2 + n3) / 3;
        if(media >= 7){
            printf("Aluno: %s, Média: %i, Aprovado\n", nome, media);
        } 
        else if((media >= 4)&(media < 7)){
            printf("Aluno: %s, Média: %i, De Final\n", nome, media);
        } 
        else{
            printf("Aluno: %s, Média: %i, Reprovado\n", nome, media);
        }
    }
    return 0;
}