#include <stdio.h>

int main (void) {

    float bal, interest, monthly_payment;
    int months;

    printf("Enter your loan balance: ");
    scanf("%f", &bal);

    printf("Enter the interest rate: ");
    scanf("%f", &interest);
    interest = interest/100;

    printf("Enter your monthly payment:" );
    scanf("%f", &monthly_payment);

    printf("How many months do you want to see: ");
    scanf("%d", &months);

    for (int i = 0; i < months; i++) {
        float remaining = bal * (1 + (interest / 12)) - monthly_payment;
        
        if (remaining < 0) {
            remaining = 0;
        }

        printf("Balance remaining after month %d: %.2f\n", i+1, remaining);

        bal = remaining;

    }

    return 0;
}