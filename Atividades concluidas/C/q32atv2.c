/*Criar um algoritmo que entre com dez notas de cada aluno de uma turma de 20 alunos
e exibir: a média de cada aluno, a média da turma e o percentual de alunos que tiveram
média acima de 7,0.*/
#include <stdio.h>
int main() {
    char nome[50];
    float n1, c, aprovados;
    for (int i = 1; i <= 20; i++) {
        printf("Digite o Nome: \n");
        scanf("%s", nome);
        n1=0;
        c=0;
        for(int i2 = 1; i2 <= 10; i2++){
            printf("Digite as notas: \n");
            scanf("%f", &n1);
            c+=n1;
            if((c/10)>= 7){
                aprovados++;
            } 
        }
        if((c/10) >= 7){
            printf("Aluno: %s, Média: %0.2f, Aprovado\n", nome, (float)c/10);
        } 
        else if(((c/10) >= 4)&((c/10) < 7)){
            printf("Aluno: %s, Média: %0.2f, De Final\n", nome, (float)c/10);
        } 
        else{
            printf("Aluno: %s, Média: %0.2f, Reprovado\n", nome, (float)c/10);
        }
    }
    printf("Média da Turma: %0.2f, Percentual de Aprovados: %0.2f%%", (float)c/20, (float)aprovados/20);
    return 0;
}