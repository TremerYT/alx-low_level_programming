#include <stdio.h>

#define SUM(x, y) ((x) + (y))

int main() {
    int a = 5, b = 3;
    printf("The sum of %d and %d is %d\n", a, b, SUM(a, b));

    float c = 2.5, d = 3.7;
    printf("The sum of %.2f and %.2f is %.2f\n", c, d, SUM(c, d));

    return 0;
}
