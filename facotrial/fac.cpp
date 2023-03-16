#include <stdio.h>

double factorial_iter(int n) {
    double a = 1;
    for (int i = 1; i <= n; i++) {
        a = a * i;
    }
    return a;
}

double factorial_rec(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    else {
        return n * factorial_rec(n - 1);
    }

}

int main()
{
    int n = 20;

    double result_iter = factorial_iter(n);
    double result_rec = factorial_rec(n);

    printf("%.f\n", result_iter);
    printf("%.f", result_rec);
    return 0;
}
