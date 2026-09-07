#include <stdio.h>
#include <stdlib.h>

//2. Számok sorban

int main(){
    printf("Meddig irjam ki a szamokat?\n");
    int szam;
    scanf("%d",&szam);
    int x = 1;
    while(x<=szam){
        printf("%d\n",x);
        x = x+1;
    }
    printf("\n\n");

    for(int i=1;i<=10;i=i+1){
        printf("%d\n",i);
    }

    printf("\n\n");

    printf("Meddig irjam ki a szamokat?(Csak paros szamok lesznek kiirva)\n");
    int szam2;
    scanf("%d",&szam2);
    int y = 1;
    while(y<=szam2){
        if(y % 2 == 0){
           printf("%d\n",y);
        }
        y = y+1;
    }
    printf("\n\n");

    printf("Szamok 1-100-ig, amik 3-mal es 5-tel sem oszhatok\n");
    int z = 1;
    while(z<=100){
        if(z % 3 != 0 && y % 5 != 0){
            printf("%d\n",z);
            z = z+1;
        }
        else{
            z = z+1;
        }
    }

    return 0;
}
