#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Szamtani sorozat\n\n");
    double szam_1,szam_2,szam_3;
    printf("Add meg a harom szamot\n\n");
    printf("1. szam: ");
    scanf("%lf",&szam_1);
    printf("\n");
    printf("2. szam: ");
    scanf("%lf",&szam_2);
    printf("\n");
    printf("3. szam: ");
    scanf("%lf",&szam_3);
    printf("\n");

    if(szam_1 < 0)
        printf("negativ ");
    else if(szam_1 == 0)
        printf("Mivel a szam 0, ezert se nem pozitiv es se nem negativ. ");
    else
        printf("nemnegativ ");

    while(szam_1 < szam_3){
        printf("%g ",szam_1);
        szam_1 = szam_1 + szam_2;
    }
    return 0;
}
