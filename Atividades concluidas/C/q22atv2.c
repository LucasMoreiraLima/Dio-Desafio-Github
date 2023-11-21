/*A série de FETUCCINE é gerada da seguinte forma: 
os dois primeiros termos são fornecidos pelo usuário. 
Os demais são gerados a partir da soma ou subtração dos dois
termos anteriores, da seguinte forma:
• 𝐴𝑖=𝐴𝑖−1 + 𝐴𝑖2, se i for impar
• 𝐴𝑖=𝐴𝑖−1 - 𝐴𝑖2, se i for par*/
#include <stdio.h>
int main(){
    int a, s;
    printf("Digite dois números: ");
    scanf("%i %i", &a, &s);
    for(int i = 1; i <= 20; i++){
        int n;
        if((i%2)==0){
            n = a-s;
        }
        else{
            n = a + s;
        }
        printf("FIBONACCI: %i + %i = %i\n", a, s, n);
        a=s;
        s=n;
    }
}