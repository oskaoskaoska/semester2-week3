
#include <stdio.h>

/*
 * Potrfolio submission
 * Name: Oscar
 * ID: 201968111
 */

 int main( void ) {

    // define and initialise variables for the problem data 
    //full salary before
    float salary = 36250;

    //NI rate percent
    float ni_rate_percentage = 8.0;

    //Tax rate percent
    float tax_rate_percentage = 15.0;

    //how much NI is taken off
    float ni_contribution;

    //salary after ni
    float salary_after_ni;

    //amount that is taxable above 12500 after NI
    float taxable_amount;

    //how much tax paid
    float tax_contribution;

    //final salary after tax and NI
    float take_home_salary;

    // calculate the deductions and final take-home salary
    //convert to 0.08 then multiply by salary
    ni_contribution = salary * (ni_rate_percentage / 100.0);

    //take NI off salary
    salary_after_ni = salary - ni_contribution;

    //tax only applies to money over 12500 after NI
    taxable_amount = salary_after_ni - 12500.0;

    //if result is negative set it to zero as you cant pay tax on a negative
    if (taxable_amount < 0.0) {
      taxable_amount = 0.0;
    }

    //convert to 0.15 then multiply by taxable amount
    tax_contribution = taxable_amount * (tax_rate_percentage / 100.0);

    //Final take home salary
    take_home_salary = salary_after_ni - tax_contribution;

    // Use only these print statement with appropriate formatting and variable names
    //%.2f for 2 dp and \n for a new line
    printf("Salary £%.2f\n",salary);
    printf("NI contribution £%.2f\n",ni_contribution);
    printf("Tax contribution £%.2f\n",tax_contribution);
    printf("Take home salary £%.2f\n",take_home_salary);

    return 0;
 }