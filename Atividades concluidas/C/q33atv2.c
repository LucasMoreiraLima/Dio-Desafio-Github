/*Um colégio tem 15 turmas e cada turma tem N alunos. Criar um algoritmo que exiba,
por turma, o total de alunos com nota superior a 7 e média geral da escola*/
#include <stdio.h>
int main() {
    char nome[50];
    float n1, c, aprovados, totalt;
    for(int i3=1; i3 <= 15; i3++){
        int alunos;
        printf("Digite quantos alunos tem a turma %i: ", i3);
        scanf("%i", &alunos);
        totalt+=alunos;
        for (int i = 1; i <= alunos; i++){
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
    }
    printf("Média da Escola: %0.2f, Percentual de Aprovados: %0.2f%%", (float)c/totalt, (float)aprovados/totalt);
    return 0;
}