//Exibir os múltiplos de 5 no intervalo de 1 a 100.
#include <stdio.h>
int main(){
    int i;
    for (i = 5; i <= 100; i++)
    {
        if ((i%5)==0){
            printf("%i\n", i);
        }
    }
    return 0;
}