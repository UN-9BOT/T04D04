#include <stdio.h>

long int fib(long int);
int main(void) {
    long int n;
    char x;

    (scanf("%li%c", &n, &x) == 2 && (x == '\n') && (n > 0)) ? printf("%li", fib(n)) : printf("n/a");
    return (0);
}

long int fib(long int n) {
    if (n < 2) { return(n); }
    return (fib(n - 1) + fib(n - 2));
}

