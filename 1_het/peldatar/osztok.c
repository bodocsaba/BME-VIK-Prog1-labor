#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Ez a program kiirja egy szamnak az osztoit\n\n");
    int szam;
    printf("Add meg a szamot\n\n");
    printf("szam: ");
    scanf("%d",&szam);
    printf("\n");
    printf("A szam osztoi: 1");
    for(int i=2;i<=szam;i++){
        if(szam % i == 0)
            printf(",%d",i);
    }
    return 0;
}
