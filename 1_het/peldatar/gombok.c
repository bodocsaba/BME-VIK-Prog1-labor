#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Gombok\n\n");
    int r = 10; //cm
    bool vege = false;
    while(vege == false){
        double V = (4/3)*(r*r*r)*3.14;
        if(V/1000000 < 1){
            printf("V = %lf cm^3\n",V/1000000);
            r = r+10;
        }
        else
            vege = true;
    }
    return 0;
}
