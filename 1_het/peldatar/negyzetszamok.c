#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    printf("a) Ez a program kiirja az elso N darab negyzetszamot es b) osszes N-nel kisebb negyzetszamot\n\n");
    printf("Mennyi N-ig irja ki a negyzetszamokat?\n\n");
    printf("N: ");
    int N;
    scanf("%d",&N);
    printf("\n");
    for(int i=1;i<=N;i++){
        printf("%d | ",i*i);
    }
    printf("\n\n");
    printf("N-nel kisebb negyzetszamok\n\n");
    for(int i=1;i<=N;i++){
        if(i*i < N)
            printf("%d | ",i*i);
    }
    return 0;
}
