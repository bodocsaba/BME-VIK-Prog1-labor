#include <stdio.h>
#include <stdlib.h>


int main(){
    printf("Penzezes\n\n");
    int szazasok,ketszazasok,otszazasok;
    printf("Add meg hany 100, 200, es 500 Ft-os van a kasszaban\n");
    scanf("%d %d %d",&szazasok, &ketszazasok, &otszazasok);
    printf("A kasszaban osszesen %d Ft van.", 100*szazasok+200*ketszazasok+500*otszazasok);
    return 0;
}
