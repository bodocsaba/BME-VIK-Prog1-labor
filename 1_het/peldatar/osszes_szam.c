#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Ez a program kiirja a barmely 3 szamjegyekbol kepezheto osszes haromjegyu szamot\n\n");
    int x_1;
    int x_2;
    int x_3;
    printf("Add meg a szamjegyeket\n\n");
    printf("1. szamjegy: ");
    scanf("%d",&x_1);
    printf("2. szamjegy: ");
    scanf("%d",&x_2);
    printf("3. szamjegy: ");
    scanf("%d",&x_3);
    printf("\n");
    printf("Szamok: \n\n");
    if(x_1 == x_2 && x_2 == x_3){
        printf("%d%d%d",x_1,x_2,x_3);
    }
    else if(x_1 == x_2 || x_1 == x_3 || x_2 == x_3){
        for(int i=1;i<=3;i++){
            if(i == 1){
                if(x_1 == x_2)
                    printf("%d%d%d\n",x_1,x_2,x_3);
                else if(x_1 == x_3)
                    printf("%d%d%d\n",x_1,x_3,x_2);
                else
                    printf("%d%d%d\n",x_2,x_3,x_1);
            }
            else if(i == 2){
                if(x_1 == x_2)
                    printf("%d%d%d\n",x_1,x_3,x_2);
                else if(x_1 == x_3)
                    printf("%d%d%d\n",x_1,x_2,x_3);
                else
                    printf("%d%d%d\n",x_2,x_1,x_3);
            }
            else if(i == 3){
                if(x_1 == x_2)
                    printf("%d%d%d\n",x_3,x_1,x_2);
                else if(x_1 == x_3)
                    printf("%d%d%d\n",x_2,x_1,x_3);
                else
                    printf("%d%d%d\n",x_1,x_2,x_3);
            }
        }

    }
    else{
        for(int i=1;i<=6;i++){
            if(i<=2){
                printf("%d",x_1);
                if(i == 1){
                    printf("%d",x_2);
                    printf("%d\n",x_3);
                }
                else if(i == 2){
                    printf("%d",x_3);
                    printf("%d\n",x_2);
                }
            }
            else if(i<=4 && i>=3){
                printf("%d",x_2);
                if(i == 3){
                    printf("%d",x_1);
                    printf("%d\n",x_3);
                }
                else if(i == 4){
                    printf("%d",x_3);
                    printf("%d\n",x_1);
                }
            }
            else if(i<=6 && i>=5){
                printf("%d",x_3);
                if(i == 5){
                    printf("%d",x_1);
                    printf("%d\n",x_2);
                }
                else if(i == 6){
                    printf("%d",x_2);
                    printf("%d\n",x_1);
                }
            }
        }

    }

    return 0;
}
