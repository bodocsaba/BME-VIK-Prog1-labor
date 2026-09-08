#include <stdio.h>
#include <math.h>

int main(){
    int a,b,c;
    printf("Masodfoku egyenlet diszkutalasa\n\n");
    printf("Add meg 'a', 'b' es 'c' ertekeket: \n");
    scanf("%d %d %d",&a,&b,&c);
    int D = b*b-4*a*c;
    double gyok_D = sqrt(D);
    double poz_x = ( -b + gyok_D ) / (2*a);
    double neg_x = ( -b - gyok_D ) / (2*a);
    if( a*(poz_x*poz_x)+b*poz_x+c == 0 ){
        printf("Az x_1 = %.1lf \n", poz_x);
    }
    else{
        printf("x_1 = Nincs megoldas \n");
    }
    if( a*(neg_x*neg_x)+b*neg_x+c == 0 ){
        printf("Az x_2 = %.1lf", neg_x);
    }
    else{
        printf("x_2 = Nincs megoldas");
    }
    return 0;
}
