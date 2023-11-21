//Exibir o quadrado dos números de 10 a 30.
#include <stdio.h>
int main(){
    int i;
    for (i = 10; i <= 30; i++)
    {
        printf("%i = %i\n", i, i*i);
    }
    return 0;
}