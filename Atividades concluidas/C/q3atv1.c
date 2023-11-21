/*Leia dois valores em duas variáveis;
Imprima o nome e os valores destas variáveis;
Troque os valores das variáveis;
Imprima o nome e o valor dessas variáveis*/
#include <stdio.h>

int main(){
    #define DUMP(varname) printf("%s = %d\n", #varname, varname);
    int c, cc, ccc;
    printf("Digite dois valores:");
    scanf("%i %i", &c, &cc);
    DUMP(c);
    DUMP(cc);
    ccc=cc;
    cc=c;
    DUMP(cc);
    cc=ccc;
    c=cc;
    DUMP(c);
    return 0;
}