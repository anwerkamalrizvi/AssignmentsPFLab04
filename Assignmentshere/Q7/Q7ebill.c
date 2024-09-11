/*
*Name: SYED ANWER
*Roll no: 24k-0033
*Program: Q8 of the Lab o4
*Q7: Write a program in C to calculate and print the Electricity bill of a given
customer. The customer id., name and unit consumed by the user should be
taken from the keyboard and display the total amount to pay to the customer.
The charges are as follow:

Unit Charge/Unit
Up to 199 @16.20
200 and above but less than 300 @20.10
300 and above but less than 500 @27.10
500 and above @35.90
If the bill exceeds Rs. 18000 then a surcharge of 15% will be charged on top of the bill.
*/
#include<stdio.h>
#include<string.h>

int main(){
	char a[100];
	long long int cid,unc;
	double bill,tax;
	printf("Enter the customer ID:");
	scanf("%lld",&cid);
	if(cid<0){
		printf("customer ID is invalid.");	
	}else{
 	printf("Enter the unit consumed:");
	scanf("%lld",&unc);
	
	printf("Enter name using _ :");
	scanf("%s",&a);
 	printf("Name: %s",a);
	printf("\nCustomer id: %lld",cid);
	printf("\nUnit Consumed: %lld ",unc);
	if(unc<0){
		printf("\nEnter a valid input!");
	}//end if#1
	else if(unc<200){
		bill = unc*16.20;
		printf("\nThe total bill is %.2lf",bill);
	}//end if else #1
	else if(unc>=200&&unc<300){
		bill=unc*20.1;
		printf("\nThe total bill is %.2lf",bill);
	}//end if else #2
	else if(unc>=300&&unc<500){
		bill=unc*27.1;
		printf("\nThe total bill is %.2lf",bill);
	}//end if else #3
	else if(unc>=500){
		bill=unc*35.9;
		printf("\nThe total bill is %.2lf",bill);
	}//end if else #4
		if(bill>18000){
				tax=bill*1.15;
				printf("\nThe total bill after surcharge is: %lf", tax);
				return 0;	
		}//end if inner loop #1
		else{
		return 0;}//end else

	}//end else
	
	
	
	
	
}//end main function