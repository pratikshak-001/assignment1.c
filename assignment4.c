# include <stdio.h>
 int main(){
   float basic,hra,ta,gross,tax,net;

printf("Enter Basic Salary: ");
scanf("%f",&basic);

hra = 0.10* basic;
ta = 0.05*  basic;

gross = basic+ hra+ta;
tax = 0.02*gross;
net = gross - tax;

printf("\nHRA = %f",hra);
printf("\nTA= %f",ta);
printf("\nGross Salary =%f",gross);
printf("\nProfessional Tax=%f",tax);
printf("\nNet Salary = %f\n",net);

return 0;
 }
