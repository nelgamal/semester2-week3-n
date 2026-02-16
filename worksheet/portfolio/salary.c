
#include <stdio.h>

/*
 * Potrfolio submission
 * Name: Nadine ElGamal
 * ID: 201962580
 */


int main( void ) {

    // define and initialise variables for the problem data 
   float salary = 36250;
   float NI = 0.08; 
   float tax_rate = 0.15; 
   float NI_contribution;
   float salary_after_NI;
   float tax_amount;
   float tax_contribution;
   float takehome_salary; 

    // calculate the deductions and final take-home salary
   NI_contribution = salary * NI;
   salary_after_NI = salary - NI_contribution; 

   tax_amount = 0;

   if (salary_after_NI > 12500) {
      tax_amount = salary_after_NI - 12500;
   }
   
   tax_contribution = tax_amount * tax_rate;

   takehome_salary = salary_after_NI - tax_contribution;
    // Use only these print statement with appropriate formatting and variable names
    //printf("Salary £...",var_name);
    //printf("NI contribution £...",var_name);
    //printf("Tax contribution £...",var_name);
    //printf("Take home salary £...",var_name);

   printf("Salary £%.2f\n", salary);
   printf("NI contribution £%.2f\n", NI_contribution);
   printf("Tax contribution £%.2f\n", tax_contribution);
   printf("Take home salary £%.2f\n", takehome_salary);

   return 0;
 }