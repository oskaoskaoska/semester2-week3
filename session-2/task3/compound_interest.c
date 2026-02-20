
/*
 * Compute the final result of applying compound interest 
 * to a given deposit with a set interest rate and term.
 * We will assume interest is applied at the end of each year.
 */

#include <stdio.h>
#include <math.h>

int main( void ) {

    float deposit = 120.0;  // initial deposit
    float rate = 0.05;      // interest rate
    int term = 5;           // number of years
    float final_amount;
    float gain;

    /*
     * Implement the formula for compound interest.
     * Print out the final amount and the gain compared to the initial deposit.
     */
     //using formula given to show money after interest
     final_amount = deposit * pow(1.0f + rate, term);

     //finding the gain
     gain = final_amount - deposit;
     printf("Final ammount = %f\n",final_amount);
     printf("Gain = %f\n",gain);

    return 0;
}
