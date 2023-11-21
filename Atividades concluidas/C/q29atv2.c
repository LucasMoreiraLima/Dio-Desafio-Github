/*Dados os salários bruto de 20 pessoas, exibir o desconto do INSS para cada pessoa segundo a tabela abaixo:
Salário Percentual de Desconto
Menor ou igual a R$ 600,00 Isento
Maior que R$ 600,00 e menor ou igual a R$ 1200,00 20%
Maior que R$ 1200,00 e menor ou igual 2000,00 25%
Maior que R$ 2000,00 30%*/
#include <stdio.h>
int main(){
    for(int i = 1; i <= 20; i++){
            printf("Digite o Salário: \n");
            float n2;
            scanf("%f", &n2);
            if(n2>2000.00){
                printf("Salário Bruto: %f, Líquido: %f, Desconto: %f", n2, n2*0.70, n2*0.30);
            }
            else if((n2>1200.00)&(n2<=2000.00)){
                printf("Salário Bruto: %f, Líquido: %f, Desconto: %f", n2, n2*0.75, n2*0.25);
            }
            else if((n2>600.00)&(n2<=1200.00)){
                printf("Salário Bruto: %f, Líquido: %f, Desconto: %f", n2, n2*0.80, n2*0.20);
            }
            else{
                printf("Isento");
            }
        }
    }