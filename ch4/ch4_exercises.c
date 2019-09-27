#include <stdio.h>

int main(void){
    int i = 0, j = 0, k = 0;

    //exercise 1
    puts("Exercise 1");
    //a
    puts("(a)");
    i = 5; j = 3;
    printf("%d %d\n\n", i / j, i % j);

    //b
    puts("(b)");
    i = 2; j = 3;
    printf("%d\n\n", (i + 10) % j);

    //c
    puts("(c)");
    i = 7; j = 8; k = 9;
    printf("%d\n\n", (i + 10) % k / j);

    //d
    puts("(d)");
    i = 1; j = 2; k = 3;
    printf("%d\n\n", (i + 5) % (j + 2) / k);

    //exercise 2
    puts("----------------");
    puts("Exercise 2");

    return 0;
}
