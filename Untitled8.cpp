#include<stdio.h>
main()
{
	int year;
	printf("\n enter a year");
	scanf("%d",&year);
	if ((year%4==0 && year%100!=0) || year%400==0)
	printf("\n Leap year");
	else
	printf("\n is not leap year");
}
