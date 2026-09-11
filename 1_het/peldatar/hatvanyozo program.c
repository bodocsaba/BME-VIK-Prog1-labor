#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Hatvanyozo program\n\n");
    printf("Add meg az alapot es kitevot\n");
    double alap, kitevo;
    printf("Alap: ");
    scanf("%lf",&alap);
    printf("Kitevo: ");
    scanf("%lf",&kitevo);
    double eredmeny = alap;
    if(kitevo == 0)
        eredmeny = 1;
    if(kitevo == -1)
        if(alap != 0)
            eredmeny = 1/alap;
        else
            eredmeny = 0;
    if(kitevo == 1)
        eredmeny = alap;
    else if(kitevo > 1 && alap > 0){
        for(int i=2;i<=kitevo;i++)
            eredmeny = eredmeny*alap;
    }
    else if(kitevo > 1 && alap < 0){
        for(int i=2;i<=kitevo;i++)
            eredmeny = eredmeny*alap;
    }
    else if(kitevo < -1 && alap > 0){
        eredmeny = 1/alap;
        for(int i=2;i<=(kitevo*-1);i++)
            eredmeny = eredmeny/alap;
    }
    else if(kitevo < -1 && alap < 0){
        eredmeny = 1/alap;
        for(int i=2;i<=(kitevo*-1);i++)
            eredmeny = eredmeny/alap;
    }
    printf("\n");
    printf("Az eredmeny = %g",eredmeny);
    return 0;
}
