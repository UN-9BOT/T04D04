#include <math.h>
#include <stdio.h>

double an(double);
double kva(double);

int main(void) {
    double i;
    const long double PI = 3.1415926535897932384;
    double part = PI * 2 / 41;
    for (double point = -PI; point <= PI; point += part) {
        printf("%10.7lf | %10.7lf | ", point, an(point));
        i = (sqrt(1 + 4 * point * point) - point * point - 1);
        (i < 0) ? printf("%10c | ", '-') : printf("%10.7lf | ", sqrt(i));
        printf("%10.7lf\n", kva(point));
    }
    return (0);
}

double an(double n) { return (1 / (1 + n * n)); }
double kva(double n) { return (1 / (n * n)); }
