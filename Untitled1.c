
#include <stdio.h>

int main() {
    float principal, rate, time, simpleInterest;

    // Accepting user input for principal amount, time, and rate
    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the rate of interest: ");
    scanf("%f", &rate);

    printf("Enter the time (in years): ");
    scanf("%f", &time);

    // Calculating simple interest
    simpleInterest = (principal * time * rate) / 100;

    // Displaying the result
    printf("Simple Interest = %.2f\n", simpleInterest);

    return 0;
}
