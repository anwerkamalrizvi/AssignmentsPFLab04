/*
*Name: SYED ANWER
*Rollno: 24k-0033
*Program: Q6. An online shopping store is providing discounts on the items due to the Eid. If the cost of items is less than 2000 it will give a discount up to 5%. If the cost of
shopping is 2000 to 4000, a 10% discount will be applied. If the cost of shopping is 4000 to 6000, a 20% discount will be applied. If it's more than 6000
then a 35% discount will be applied to the cost of shopping. Print the actual amount, saved amount and the amount after discount. The Minimum amount eligible for a discount is 500.
*/

#include<stdio.h>

int main(){
	double i,j,k,save,dis;
	printf("\nEnter the amount:-");
	scanf("%lf",&i);
	if(i<0){
		printf("Enter a valid amount. ");
	}//end if#1
	else if(i>0&&i<500){
		printf("Actual Amount: %lf",i);
		printf("\nDiscount: 0\nSaved amount: 0");
		printf("\nAmount after discount:%lf",i);
	}//end if else#1
	else if(i>500&&i<2000){
		printf("Actual Amount: %.2lf",i);
		save=i*0.05;
		dis=i-save;
		printf("\nDiscount: 5 percent\nSaved amount: %.2lf",save);
		printf("\nThe amount after discount: %.2lf",dis);
	}//end if else#2	
	
	else if(i>2000&&i<4000){
		printf("Actual Amount: %.2lf",i);
		save=i*0.10;
		dis=i-save;
		printf("\nDiscount: 10 percent\nSaved amount: %.2lf",save);
		printf("\nThe amount after discount: %.2lf",dis);
	}//end if else#3
	
	else if(i>4000&&i<6000){
		printf("Actual Amount: %.2lf",i);
		save=i*0.20;
		dis=i-save;
		printf("\nDiscount: 20 percent\nSaved amount: %.2lf",save);
		printf("\nThe amount after discount: %.2lf",dis);
	}//end if else#4
	
	else if(i>6000){
		printf("Actual Amount: %.2lf",i);
		save=i*0.35;
		dis=i-save;
		printf("\nDiscount: 35 percent\nSaved amount: %.2lf",save);
		printf("\nThe amount after discount: %.2lf",dis);
	}//end if else#5
	
	else
	{
		printf("Timed out");
	}//end else
	return 0;
}//end main function