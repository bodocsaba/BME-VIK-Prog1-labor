#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Eldonti egy szamrol, hogy pozitiv,negativ vagy nulla es egesz vagy tort\n\n");
    printf("Add meg a szamot: ");
    double szam;
    scanf("%lf", &szam);
    int szam2 = szam;

    if(szam > 0 && szam == szam2){
        printf("Ez a szam (%.0lf) pozitiv es egesz.",szam);
    }
    if(szam > 0 && szam != szam2){
        printf("Ez a szam (%.2lf) pozitiv es tort.",szam);
    }
    if(szam < 0 && szam == szam2){
        printf("Ez a szam (%.0lf) negativ es egesz.",szam);
    }
    if(szam < 0 && szam != szam2){
        printf("Ez a szam (%.2lf) negativ es tort.",szam);
    }
    else if(szam == 0){
        printf("Ez a szam nulla.");
    }
    return 0;
}
