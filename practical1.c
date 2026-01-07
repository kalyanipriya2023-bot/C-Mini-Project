#include <stdio.h>
#include <math.h>
int main() {
float principal, annualRate, monthlyRate;
int months;
float emi, interest, principalPaid, balance;
printf("Enter Loan Amount (Principal): ");
scanf("%f", &principal);
printf("Enter Annual Interest Rate (in %%): ");
scanf("%f", &annualRate);
printf("Enter Loan Tenure (in months): ");
scanf("%d", &months);
monthlyRate = annualRate / (12 * 100);
emi = (principal * monthlyRate * pow(1 + monthlyRate, months)) /
      (pow(1 + monthlyRate, months) - 1);
printf("\nMonthly EMI: %.2f\n", emi);
printf("\nMonth\tEMI\t\tInterest\tPrincipal\tBalance\n");
balance = principal;
for (int i = 1; i <= months; i++) {
interest = balance * monthlyRate;
principalPaid = emi - interest;
balance -= principalPaid;
if (balance < 0)
balance = 0;
printf("%d\t%.2f\t\t%.2f\t\t%.2f\t\t%.2f\n",
i, emi, interest, principalPaid, balance);
}
return 0;
}
