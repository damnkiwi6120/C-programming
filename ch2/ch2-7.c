#include <stdio.h>

int main(void){
    printf("Enter a dollar amount: ");
    int usd = 0;
    scanf("%d", &usd);
    printf("\n$20 bills: %d", usd/20);
    usd -= (usd/20) *20;
    printf("\n$10 bills: %d", usd/10);
    usd -= (usd/10) *10;
    printf("\n $5 bills: %d", usd/5);
    usd -= (usd/5) *5;
    printf("\n $1 bills: %d\n", usd);
    return 0;
}
