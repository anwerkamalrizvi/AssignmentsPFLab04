/*
*Name: Syed Anwer
*Roll no: 24k-0033
*Q5. Program:- Write a C program that acts as an AI-powered temperature converter. It
should allow users to convert between Celsius, Fahrenheit, and Kelvin. The
program should prompt the user to:
Select the input temperature unit (C, F, K).
Enter the temperature value.
Select the unit to convert to (C, F, K). The program should then perform the
conversion and print the result. At the end of the program, print a message            //l:10 (I am writing line number to avoid confusion)
like: "Thank you for using our AI-powered temperature converter."
*/
#include<stdio.h>

int main(){
	char a;
	char C;
	double F,Fah,Fah2,Fah3,K,Kel,Kel2,Kel3,t,Cel,Cel2;
	float f=0.555f;
	printf("\t\tWELCOME TO OUR AI-POWERED TEMPERATURE CONVERTER\n\nSelect the input temperature unit (C, F, K): ");   //l:20
	scanf("%c",&a);
	//Celcius to fahrenheit and kelvin
	if(a=='c' ||a=='C'){
		printf("\nYou have selected celcius.\nEnter the temperature in celcius: ");
		scanf("%lf",&t);
		printf("\nEnter the unit you want to convert to (F, K): "); 
		scanf("%c",&C);
		scanf("%c",&C);
		if(C=='K' || C=='k'){
			Kel= t+273.15;           									//l:30
			printf("The temperature in kelvin is %.3lf",Kel);
		}//end if#1 inner
		else if(C=='F' || C=='f'){
			Fah=(t*9/5)+32;
			printf("The temperature in fahrenheit is %.3lf",Fah);
		}//end if else #1 inner
	}//end if#1 and outer loop #1
	//Fahrenheit to kelvin and celcius
	// I took multiple variables for the formula correction. It was giving errors that's why I declared Kel2,Kel3 and Cel2 for this formula.
	else if(a=='F' ||a=='f'){											//l:40
		printf("\nYou have selected fahrenheit.\nEnter the temperature in fahrenheit: ");			
		scanf("%lf",&t);
		printf("\nEnter the unit you want to convert to (C, K): "); 
		scanf("%c",&C);
		scanf("%c",&C);
		if(C=='K' || C=='k'){
			Kel=t-32;
			Kel2=Kel*f;
			Kel3=Kel2+273.15;
			printf("The temperature in kelvin is %.3lf",Kel3);						//l:50
		}//end if#2 inner
		else if(C=='C' || C=='c'){
			Cel=t-32;
			Cel2=Cel*f;
			printf("The temperature in celcius is %.3lf",Cel2);						//l:55
	
		}//end if else #2 inner
	}//end if else #1 & outer loop 2

	else if(a=='k'||a=='K'){
		printf("\nYou have selected Kelvin.\nEnter the temperature in Kelvin: ");				//l:60	
		scanf("%lf",&t);
		printf("\nEnter the unit you want to convert in (C,F): ");
		scanf("%c",&C);	
		scanf("%c",&C);
		if(C=='C'||C=='c'){
			Kel = t+273.15;
			printf("The temperature in celcius is %.3lf",Kel);
		}//end if#3 inner
		//Fah variable used and declared two more variables Fah2 and Fah3 to avoid the formula mistakes
		else if(C=='F'||C=='f'){										//l:70
			Fah=t-273.15;
			Fah2=Fah*1.8;		
			Fah3=Fah2+32;
			printf("The temperature in fahrenheit is %.3lf",Fah3);
			
		}//end if else#3 inner
	
	}//end if else #2 & outer loop #3
	else 
	{														//l:80
		printf("\nInvalid input.");
	}//end else #1 and outer loop #4
	printf("\n\nThank you for using our AI-powered temperature converter.");
	return 0;
}//end main function!



															//l:90