#include <stdio.h>

int fib(int);
int main(void) {
    int n;
    char x;

    (scanf("%i%c", &n, &x) == 2 && (x == '\n') && (n > 0)) ? printf("%i", fib(n)) : printf("n/a");
    return (0);
}

int fib(int n) {
    if (n < 2) { return(n); }
    return (fib(n - 1) + fib(n - 2));
}

