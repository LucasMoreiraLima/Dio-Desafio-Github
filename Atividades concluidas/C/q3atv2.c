//Exibir os número múltiplos de 3 no intervalo de 10 a 30.
#include <stdio.h>
int main(){
    int i;
    for (i = 10; i <= 30; i++)
    {
        if ((i%3)==0)
        {
            printf("%i\n", i);
        }
        
    }
    return 0;
}