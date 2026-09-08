#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Tartaly Festese!\n\n");
    printf("Milyen magas a tartaly (m^2)? ");
    int magas; double atmero;
    scanf("%d",&magas);
    printf("Mennyi az atmeroje? ");
    scanf("%lf",&atmero);
    double r = atmero / 2;
    double felszin = 2*(r*r)*3.14+2*r*3.14*magas;
    printf("%lf doboz festek kell.", felszin/2);
    return 0;
}
