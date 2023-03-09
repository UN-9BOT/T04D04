#include <stdio.h>

int div(int, int, int);
int rem(int, int, int);

int max_e_prime(int);

int main(void) {
    int n;
    char x;

    ((scanf("%i%c", &n, &x) == 2 && (x == '\n'))) ? printf("%i", max_e_prime((n >= 1) ? n : -n))
                                                  : printf("n/a");
    return (0);
}

int max_e_prime(int x) {
    long i, y;

    i = 2;
    y = x;
    while (x != 1) {
        if ((rem(x, i, 0)) == 0) {
            y = i;
            x = div(x, i, 0);
        } else if (i * i > x)
            i = x;
        else
            i++;
    }
    return (y);
}

int div(int x, int y, int r) {
    while (x > 0) {
        return (div(x - y, y, ++r));
    }
    return r;
}

int rem(int x, int y, int r) {
    while (x > 0) {
        return (rem(x - y, y, ++r));
    }
    return x;
}
