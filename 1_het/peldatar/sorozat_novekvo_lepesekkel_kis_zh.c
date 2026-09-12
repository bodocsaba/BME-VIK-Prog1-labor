#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Sorozat novekvo lepesekkel\n\n");
    int szam_1,szam_2;
    printf("Add meg a ketto szam erteket\n\n");
    printf("Az elso szam: ");
    scanf("%d",&szam_1);
    printf("\n");
    printf("A masodik szam: ");
    scanf("%d",&szam_2);
    printf("\n");
    if(szam_1 < szam_2){
        int i = 0;
        while(szam_1+i < szam_2){
            szam_1 = szam_1+i;
            printf("%d ",szam_1);
            i++;
        }
    }
    else if(szam_1 > szam_2){
        int i = 0;
        while(szam_2+i < szam_1){
            szam_2 = szam_2+i;
            printf("%d ",szam_2);
            i++;
        }
    }
    else
        printf("Hiba a ket szam egyenlo.");
    return 0;
}
