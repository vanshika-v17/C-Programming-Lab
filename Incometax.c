/*
Income Tax Calculator :

     Income                         Tax
    <=2.5 L                         0%
>2.5 L && <=5 L                     5%
>5 L && <= 10 L                     20%
     >10 L                          30%

Add progressive taxation :
// 50000 as a standard deduction.
// If tax < 10000 then rebate.
// If income > 50 L then surcharge of 10% .

Output :
// Annual income
// Taxable income
// Tax before surcharge / rebate
// Rebate , surcharge ( if applicable )
// Final Tax

*/


#include<stdio.h>
int main () {
    float annual_income, taxable_income, tax, rebate, surcharge, final_tax;
    printf("Annual income :");
    scanf("%f", &annual_income);

    // Now we have to apply the standard deduction that is of 50000 
    
    taxable_income = annual_income - 50000; 
    if ( taxable_income < 0 )
        printf("Taxable Income = 0\n");
    else 
        printf("Taxable Income: %.2f\n", taxable_income); 
    
    // Now we have to apply progressive taxaxtion

    if ( taxable_income <= 250000 ) 
    {
        tax = 0;
        printf("Tax before Rebate/Surcharge: %.2f\n", tax);
    }
    else if ( taxable_income <= 500000 )
    {
        tax = 0.05 * ( taxable_income - 250000 );
        printf("Tax before Rebate/Surcharge: %.2f\n", tax);
    }
    else if ( taxable_income <= 1000000 )
    {
        tax = (250000 * 0.05) + (0.2 * ( taxable_income - 500000 ));
        printf("Tax before Rebate/Surcharge: %.2f\n",tax);
    }        
    else if ( taxable_income > 1000000 )
    {
        tax = (250000 * 0.05) + ( 500000 * 0.2 ) + (0.3 * ( taxable_income - 1000000));
        printf("Tax before Rebate/Surcharge: %.2f\n", tax);
    }
    else {
        printf("Invalid Input\n");
    }

    // We'll determine if rebate will apply or not
    if ( tax < 10000 ) 
    {
        rebate = tax;
        printf("Rebate: %.2f\n", tax);
    }
    else {
        rebate = 0;
        printf("Rebate: %.2f\n", rebate);
    }

    // We'll check if surcharge will apply or not
    if ( annual_income > 5000000 )
    {
        surcharge = tax * 0.1;
        printf("Surcharge: %.2f\n", surcharge);
    }
    else {
        surcharge = 0;
        printf("Surcharge: %.2f\n", surcharge);
    }

    // Calculate final tax
    final_tax = tax + surcharge - rebate;
    printf("Final Tax: %.2f\n", final_tax);

    return 0;
}