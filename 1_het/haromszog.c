#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// a = BC, b = AC, c = AB, K = a+b+c, T = 1/2|x_1(y_2-y_3)+x_2(y_3-y_1)+x_3(y_1-y_2)|
// m_a = (2T) / a   m_b = (2T) / b    m_c = (2T) / c
// alfa = arccos((b^2+c^2-a^2) / (2*b*c)) beta = arccos((a^2+c^2-b^2) / (2*a*c))
// gamma = arccos((a^2+b^2-c^2) / (2*a*b))

int main(){
    printf("Sikbeli haromszog kerulet/terulet/szogek/magassagok(ma,mb,mc) kiszamitasa\n\n");
    double x_1,x_2,x_3,y_1,y_2,y_3;
    printf("Add meg az A csucs x_1 es y_1 koordinatait\n");
    scanf("%lf %lf",&x_1,&y_1);
    printf("\n");
    printf("Add meg az B csucs x_2 es y_2 koordinatait\n");
    scanf("%lf %lf",&x_2,&y_2);
    printf("\n");
    printf("Add meg az C csucs x_3 es y_3 koordinatait\n");
    scanf("%lf %lf",&x_3,&y_3);
    printf("\n");

    double BC = (x_3 - x_2)*(x_3 - x_2) + (y_3 - y_2)*(y_3 - y_2);
    double AC = (x_3 - x_1)*(x_3 - x_1) + (y_3 - y_1)*(y_3 - y_1);
    double AB = (x_2 - x_1)*(x_2 - x_1) + (y_2 - y_1)*(y_2 - y_1);

    double a = sqrt(BC);
    double b = sqrt(AC);
    double c = sqrt(AB);

    double K = a+b+c;
    double T = 0.5*(fabs(x_1*(y_2-y_3)+x_2*(y_3-y_1)+x_3*(y_1-y_2)));

    double m_a = (2*T) / a;
    double m_b = (2*T) / b;
    double m_c = (2*T) / c;

    double alfa = (acos(((b*b+c*c-a*a) / (2*b*c))))*(180 / 3.14);
    double beta = (acos(((a*a+c*c-b*b) / (2*a*c))))*(180 / 3.14);
    double gamma = (acos(((a*a+b*b-c*c) / (2*a*b))))*(180 / 3.14);

    printf("A sikbeli haromszog kerulete: %.1lf m^2 \n\n", K);
    printf("A sikbeli haromszog terulete: %.1lf m^3 \n\n", T);
    printf("A sikbeli haromszog szogei Alfa = %.1lf, Beta = %.1lf, Gamma = %.1lf \n\n", alfa, beta, gamma);
    printf("A sikbeli haromszog harom magassaga m_a = %.1lf m, m_b = %.1lf m, m_c = %.1lf m \n", m_a,m_b,m_c);
    return 0;
}
