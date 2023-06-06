#include<stdio.h>
main()
{
	float p,r,i,t;
	printf("Enter the principle,rate and years:");
	scanf("%f %f %f",&p,&r,&t);
	i=p*r*t/100;
	printf("The simple interest is %f",i);
}
