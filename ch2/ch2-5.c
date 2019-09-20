#include <stdio.h>

int main(void){
    float x = 0.0f;
    printf("f(x) = 3x^5 +2x^4 -5x^3 -x^2 +7x -6\n");
    printf("Enter x: ");
    scanf("%f", &x);
    float p = 3.0f *x*x*x*x*x + 2.0f *x*x*x*x - 5.0f *x*x*x - 1.0f *x*x + 7.0f *x - 6.0f;
    printf("x = %.2f\nf(x) = %.2f", x, p);
    return 0;
}
