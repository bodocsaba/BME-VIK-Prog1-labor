#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Ez a program kiszamolja az x_0=2, x_i=2*x_i-1+5 sorozat n-edik elemet\n\n");
    printf("Add meg az n erteket\n\n");
    printf("n: ");
    int n;
    scanf("%d",&n);
    int elozo = 2;
    int elozo_elozo;
    int kovetkezo;
    printf("\n");
    printf("Az elso %d elem \n",n);
    for(int i=1;i<=n;i++){
        printf("%d. %d\n",i,elozo);
        kovetkezo = 2*elozo+5;
        elozo_elozo = elozo;
        elozo = kovetkezo;
    }
    printf("\n");
    printf("Az n(%d)-edik elem: %d",n,elozo_elozo);
    return 0;
}
