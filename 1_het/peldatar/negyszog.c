#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    printf("Negyszog kerulet/terulet szamito koordinatak alapjan\n\n");
    double x_1,y_1,x_2,y_2,x_3,y_3,x_4,y_4;
    printf("Add meg a negyszog A csucsanak x y koordinatait\n");
    scanf("%lf %lf",&x_1,&y_1);
    printf("Add meg a negyszog B csucsanak x y koordinatait\n");
    scanf("%lf %lf",&x_2,&y_2);
    printf("Add meg a negyszog C csucsanak x y koordinatait\n");
    scanf("%lf %lf",&x_3,&y_3);
    printf("Add meg a negyszog D csucsanak x y koordinatait\n");
    scanf("%lf %lf",&x_4,&y_4);

    double a = sqrt((x_2-x_1)*(x_2-x_1)+(y_2-y_1)*(y_2-y_1));
    double b = sqrt((x_3-x_2)*(x_3-x_2)+(y_3-y_2)*(y_3-y_2));
    double c = sqrt((x_4-x_3)*(x_4-x_3)+(y_4-y_3)*(y_4-y_3));
    double d = sqrt((x_1-x_4)*(x_1-x_4)+(y_1-y_4)*(y_1-y_4));

    double K = a+b+c+d;

    double e = sqrt((x_3-x_1)*(x_3-x_1)+(y_3-y_1)*(y_3-y_1));
    double s_1 = (a+b+e)/2;
    double T_1 = sqrt(s_1*(s_1-a)*(s_1-b)*(s_1-e));
    double s_2 = (c+d+e)/2;
    double T_2 = sqrt(s_2*(s_2-c)*(s_2-d)*(s_2-e));
    double T = T_1+T_2;
    printf("\n");
    printf("A negyszog kerulete: %.1lf\n",K);
    printf("A negyszog terulete: %.1lf\n",T);
    return 0;
}
