/*
Name:Kelly Mwiti Muriuki
REG NO:CT100/G/26256/25
DESCRIPTION:calculating net pay
*/

#include<stdio.h>

int main()
{
float hours, hourly_wage, gross_pay, tax, net_pay;

//user input
printf("Enter the total hours worked in a week\t:");
scanf("%f", &hours);

printf("Enter the hourly wage\t:");
scanf("%f", &hourly_wage);

//calculate gross pay
if(hours>40){
	gross_pay = (40 * hourly_wage) + ((hours - 40) * hourly_wage * 1.5);
}
else{
	gross_pay = hours * hourly_wage;
}

//calculate tax
if(gross_pay<=600){
	tax = gross_pay * 0.15;
}
else{
	tax = (600 * 0.15) + ((gross_pay - 600) * 0.20);
}
//calculate net pay
net_pay = gross_pay - tax;

//output
printf("The gross pay is $%.2f\n", gross_pay);
printf("The total tax is $%.2f\n", tax);
printf("The net pay is $%.2f\n", net_pay);

	return 0;
}