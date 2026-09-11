#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Fizetesed alapjan eldontom csoro, kozepszeru vagy gazdag vagy-e\n\n");
    printf("Add meg az atlagos fizetesed: ");
    int fizetes;
    scanf("%d", &fizetes);
    if(fizetes < 200000){
        printf("Egy budos csoro vagy");
    }
    else if(fizetes >= 200000 && fizetes < 600000){
        printf("Ideje munkat valtani (fideszt ajanlom jo penze)");
    }
    else if(fizetes >= 600000){
        printf("Azanyamot, akarmit is dolgozol vegyel be engem is.");
    }
    return 0;
}
