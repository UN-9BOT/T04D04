#include <math.h>
#include <stdio.h>

double an(double);
double lem(double);
double kva(double);

int main(void) {
    const long double PI = 3.1415926535897932384;
    double part = PI*2/42;

    for (double point = -PI; point < PI; point += part) {
        printf("%10.7lf | %10.7lf | %10.7lf | ", point, an(point), lem(point)); 
        if (point >= 0.0000000000000007215 && point <= 0.0000000000000007217) {
            printf("-\n");
        } else printf("%10.7lf\n", kva(point));
    }
    return (0);
}

double an(double n) { return (1/(1 + n*n)); }  
double lem(double n) { return (sqrt(sqrt(1 + 4*n*n)-n*n-1)); }
double kva(double n) { return (1/(n*n)); }
