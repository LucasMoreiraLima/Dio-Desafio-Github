//Faça um programa que exiba as tabuadas de 1 até 10.**
#include<stdio.h>
int main(){
    int en, i;
    while (en != 10)
    {
        en+=1;
        for (i = 0; i <= 10; i++)
        {
            printf("%i * %i = %i\n", en, i, i*en);
        }
    }
    return 0;
}