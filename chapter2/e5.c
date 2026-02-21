#include <stdio.h>

// program that receives and solves polynomials
int main(void) {
    // grab the number of exponents
    int num_exp;
    printf("How many exponents would you like: ");
    scanf("%d", &num_exp);

    // grab the coefficients
    int coef_len = num_exp+1;
    float coef[coef_len];
    for (int i = coef_len; i > 0; i--) {
         printf("Enter the coefficient for exponent %d", i);
        scanf("%f", &coef[i]);
    }
    

    // print polynomial
    for (int i = coef_len; i > 0; i--) {
        printf("%fx^%d ", coef[i], i);
    }

    return 0;
}