#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Szogek\n\n");
    double szog_1,szog_2;
    printf("Add meg a ket szog erteket\n\n");
    printf("Az elso szog: ");
    scanf("%lf",&szog_1);
    printf("\n");
    printf("A masodik szog: ");
    scanf("%lf",&szog_2);
    printf("\n");
    if(szog_1 < szog_2){
        while(szog_1 <= szog_2){
                printf("%g(%.3g) ",szog_1,(szog_1*3.14/180));
                szog_1++;
        }
    }
    else if(szog_2 < szog_1){
        while(szog_2 <= szog_1){
                printf("%g(%.2lf) ",szog_2,(szog_1*3.14/180));
                szog_2++;
        }
    }
    else
        printf("Hiba, a ket fok egyenlo.");


    return 0;
}
