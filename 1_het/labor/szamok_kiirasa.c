#include <stdio.h>
#include <stdlib.h>

int main(){
    int szam;
    printf("Gondolj egy szamra 1 es 20 kozott: \n");
    scanf("%d", &szam);
    printf("\n");
    printf("Szamok kiirasa %d - tol 20 - ig\n",szam);
    while(szam <= 20){
        printf("%d \n", szam);
        szam++;
    }
    return 0;
}
