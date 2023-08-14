#include <stdio.h>

#define ABS(x) ((x) < 0 ? -(x) : (x))

int main() {
    int num = -5;
    printf("The absolute value of %d is %d\n", num, ABS(num));

    float fnum = -3.14;
    printf("The absolute value of %.2f is %.2f\n", fnum, ABS(fnum));

    return 0;
}
