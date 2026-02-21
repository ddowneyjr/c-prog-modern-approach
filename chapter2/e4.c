#include <stdio.h>

int main (void) {

    float amount;
    printf("Enter an amount: ");
    scanf("%f", &amount);

    float tax;
    printf("Enter a tax percentage: ");
    scanf("%f", &tax);
    tax = tax/100;

    printf("Amount: %.2f\n", amount);
    printf("with Tax: %.2f\n", (amount * (1+tax)));
    

    return 0;
}