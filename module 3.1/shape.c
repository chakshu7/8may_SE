#include<stdio.h>
main()
{
	int shape;
	float h,l,a,p=3.14;
	printf("Enter 1 for triangle,2 for circle or 3 for rectangle:");
	scanf("%d",&shape);
	if (shape==2)
	{
		printf("Enter the radius of the circle in cm:");
		scanf("%f",&l);
		a=l*l;
		a=l/p;
		printf("The area of the circle is %f",a);
	}
	else if (shape==1)
	{
		printf("Enter the Height and Legth of the triangle in cm:");
		scanf("%f %f",&h,&l);
		a=h*l;
		a=a/2;
		printf("The area of the rectagle is %f",a);
	}
	else if (shape==3)
	{
		printf("Enter the Hight and Length of the rectangle in cm:");
		scanf("%f %f",&h,&l);
		a=h*l;
		printf("The are of the rectangle is %f",a);
	}
	else
	{
		printf("Shape not chosen.");
	}
}
