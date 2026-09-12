#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Csokkeno sorozat\n\n");
    double szam_1,szam_2;
    printf("Add meg a ket szamot\n\n");
    printf("Az elso szam: ");
    scanf("%lf",&szam_1);
    printf("\n");
    printf("A masodik szam: ");
    scanf("%lf",&szam_2);
    printf("\n");

    if(szam_1 > szam_2 ){
        while(szam_1 > szam_2){
            printf("%g ",szam_1);
            szam_1 = szam_1 - szam_2;
        }
    }
    else if(szam_2 > szam_1 ){
        while(szam_2 > szam_1){
            printf("%g ",szam_2);
            szam_2 = szam_2 - szam_1;
        }
    }
    else
        printf("Hiba, a ket szam egyenlo");
    return 0;
}
