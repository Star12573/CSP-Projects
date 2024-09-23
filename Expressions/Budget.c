#include<stdio.h>

int main(void){
    float income, rent, utilities, groceries,transportation, expenses, savings, total;
    float prent, putilities, pgroceries, ptransportation, pexpenses, psavings, ptotal;
printf("This is going to calculate your budget for the month\n");
printf("How much do you make a month?\n");
scanf("%f", &income);
printf("How much is rent?\n");
scanf("%f", &rent);
printf("How much is utilities?\n");
scanf("%f", &utilities);
printf("How much is groceries?\n");
scanf("%f", &groceries);
printf("How much is transportation?\n");
scanf("%f", &transportation);
expenses = rent + utilities + groceries + transportation;
savings = income *.2;
total = income - expenses - savings;
prent = rent/income;
putilities = utilities/income;
pgroceries = groceries/income;
ptransportation = transportation/income;
pexpenses = expenses/income;
printf("Your income is: $%.2f\n", income);
printf("Your expenses are: $%.2f\n", expenses);
printf("Your savings is: $%.2f\n", total);
printf("Your total left to spend is: $%.2f\n", total);
printf("Your rent is %.2f", prent);
printf("Of your income\n");
printf("Your utilities is %.2f", putilities);
printf("Of your income\n");
printf("Your groceries is %.2f", pgroceries);
printf("Of your income\n");
printf("Your transportation is %.2f", ptransportation);
printf("Of your income\n");
printf("Your expenses is %.2f", pexpenses);
printf("Of your income\n");
printf("Your savings is %.2f", psavings);
printf("Of your income\n");
printf("Your total is %.2f", ptotal);
printf("Of your income\n");
return 0;
}