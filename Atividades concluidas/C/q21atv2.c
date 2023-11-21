/*A série de RICCI é semelhante a de FIBONACCI, entretanto os dois primeiros 
números de RICCI são fornecidos pelo usuário.*/
#include <stdio.h>
int main(){
    int a, s;
    printf("Digite dois números: ");
    scanf("%i %i", &a, &s);
    for(int i = 1; i <= 20; i++){
        int n = a+s;
        printf("FIBONACCI: %i + %i = %i\n", a, s, n);
        a=s;
        s=n;
    }
}