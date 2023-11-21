//Leia dois números do usuário e os imprima na ordem decrescente.
#include <stdio.h>

int main(){
    int vv, v;
    printf("Digite dois números");
    scanf("%i %i", &vv, &v);
    if (vv > v) {
        printf("%i, %i", vv,v);
    }
    else {
        printf("%i, %i", v,vv);
    }
}