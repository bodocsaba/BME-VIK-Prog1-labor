#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Mit szeretnel atvaltani? Celsius - 1, Fahrenheit - 2: ");
    int opcio;double celsius;double fahrenheit;
    scanf("%d",&opcio);
    if(opcio == 1){
        printf("Add meg a Celsius-t: ");
        scanf("%lf",&celsius);
        printf("%.1lf Celsius atvaltva %.1lf Fahrenheit.", celsius,celsius*1.8+32);
    }
    else if(opcio == 2){
        printf("Add meg a Fahrenheit-ot: ");
        scanf("%lf",&fahrenheit);
        printf("%.1lf Fahrenheit atvaltva %.1lf Celsius.", fahrenheit,(fahrenheit-32)/1.8);
    }
    else{
        printf("Hiba, rossz szamot adtal meg.");
    }
    return 0;
}
