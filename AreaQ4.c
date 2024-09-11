/*
*Name: Syed Anwer
*Roll no: 24k-0033
*Q4: Program:- Write a C program that simulates a simple menu-driven system for geometric
calculations. The user can choose one of the following options:
1. Calculate the area of a circle.
2. Calculate the area of a rectangle.
3. Calculate the area of a triangle.
4. Exit.
*/

#include<stdio.h>

int main(){
	int a;
	float w,l;
	double b,h;
	float pi=3.142f;
	float rad;	
	double area;
	float half=0.5f;
	printf("\tAREA OF CIRCLE, TRIANGLE AND RECTANGLE\n\nType:\n1.Calculation of the Area of a Circle.\n2.Calculation of the Area of a Rectangle.\n3.Calculation of the Area of a Triangle.\n4.Exit.\nYour choice:");
	scanf("%d",&a);
	//To avoid the values except 1 to 4, we use if statement.
	if(a<1||a>4){
		printf("Invalid input!\n");
		printf("EXITING....\nSUCESS....");
	}//end if	
	else{
	//using switch statement.
	switch(a)
	{
		case 1:
		printf("\t\tAREA OF A CIRCLE\n\nEnter the radius of the circle: ");
		scanf("%f",&rad);
		area=pi*(rad)*(rad);
		printf("Area of the circle is %.3lf",area);
		break;

		case 2:
		printf("\t\tAREA OF A RECTANGLE\n\nEnter the length of the rectangle: ");
		scanf("%f",&l);
		printf("\nEnter the width of the rectangle:");
		scanf("%f",&w);
		area=w*l;	
		printf("Area of the rectangle is %.3lf",area);
		break;
		
		case 3:
		printf("\t\tAREA OF A TRIANGLE\n\nEnter the base of the triangle: ");
		scanf("%lf",&b);
		printf("\nEnter the height of the triangle:");
		scanf("%lf",&h);
		area=half*b*h;
		printf("Area of the triangle is %.3lf", area);
		break;

		case 4:
		printf("EXITING......\nSUCESS");
		
		defaut:
		printf("TIMED OUT\nEXITING.....\nSUCESS");
	}//end switch
	
	}//end else
 	return 0;


}//end main function