#include<stdio.h>
int main()
{
float principal, rate, time, compound_interest;

printf("\nEnter the principal amount:");
scanf("%f",& principal);

printf("Enter the rate of interest:");
scanf("%f",&rate);

printf("Enter the time period:");
scanf("%f",&time);

compound_interest = principal *pow ((1 + rate/100), time);

printf("\ncompound_interest = %.2f\n", compound_interest);

return 0;
}