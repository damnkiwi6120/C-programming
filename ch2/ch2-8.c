#include <stdio.h>

int main(void){

    printf("Enter amount of loan: ");
    float loan = 0.0f;
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    float rate = 0.0f;
    scanf("%f", &rate);
    rate = rate / 100.0f / 12.0f + 1.0f;
    printf("Enter monthly payment: ");
    float pay = 0.0f;
    scanf("%f", &pay);
    float remain = loan;

    remain = remain * rate - pay;
    printf("\nBalance remaining after first payment: $%.2f\n", remain);
    remain = remain * rate - pay;
    printf("Balance remaining after second payment: $%.2f\n", remain);
    remain = remain * rate - pay;
    printf("Balance remaining after third payment: $%.2f\n", remain);
    return 0;
}
