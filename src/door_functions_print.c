#include <math.h>
#include <stdio.h>

double an(double);
double kva(double);
double converter(double, double, double);
void pro(int);

int main(void) {
    double i;
    const long double PI = 3.1415926535897932384;
    double part = PI * 2 / 41;
    int counter = 0;
    for (double point = -PI; counter < 42 && point <= PI; counter++, point += part) {
        printf("%i | ", counter);
        pro(converter(an(point), 0.0919997, 0.9941630));
    }
    counter = 0;
    for (double point = -PI; counter < 42 && point <= PI; counter++, point += part) {
        printf("%i | ", counter);
        i = (sqrt(1 + 4 * point * point) - point * point - 1);
        (i < 0) ? printf("\n") : pro(converter(sqrt(i), 0.0761782, 0.4996003));
    }
    counter = 0;
    for (double point = -PI; counter < 42 && point <= PI; counter++, point += part) {
        printf("%i | ", counter);
        pro(converter(kva(point), 0.1013212, 170.3209097));
    }
    return (0);
}

double an(double n) { return (1 / (1 + n * n)); }
double kva(double n) { return (1 / (n * n)); }
double converter(double num, double vt1, double vt2) { return ((num - vt1) / (vt2 - vt1) * 20 + 1); }
void pro(int x) {
    while (x-- > 0) {
        printf("*");
    }
    printf("\n");
}
