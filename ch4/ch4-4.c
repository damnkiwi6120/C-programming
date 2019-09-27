#include <stdio.h>

int main(void){
    printf("Enter a number between 0 and 32767: ");
    int num10 = 0;
    int num8_0 = 0, num8_1 = 0, num8_2 = 0, num8_3 = 0, num8_4 = 0;
    scanf("%d", &num10);
    printf("In octal, your number is: ");

    num8_0 = num10 % 8;

    num10 /= 8;
    num8_1 = num10 % 8;

    num10 /= 8;
    num8_2 = num10 % 8;

    num10 /= 8;
    num8_3 = num10 % 8;

    num10 /= 8;
    num8_4 = num10 % 8;

    printf("%d%d%d%d%d\n", num8_4, num8_3, num8_2, num8_1, num8_0);
    return 0;
}
