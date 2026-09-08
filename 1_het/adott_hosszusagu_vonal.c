#include <stdio.h>
#include <stdlib.h>

/*
Szakasz méretének bekérése
'+' jel kiírása
Ismétlés, amíg az n <= szakasz mérete
    Leírom a '-' jelet.
    Növelem az n-t 1-gyel.
Ismétlés eddig
'+' jel kiírása
*/

int main(){
    int meret;
    int n = 1;
    printf("Mekkora legyen a szakasz? ");
    scanf("%d",&meret);
    printf("+");
    while(n <= meret){
        printf("-");
        n++;
    }
    printf("+");
    return 0;
}
