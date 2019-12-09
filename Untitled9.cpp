#include<stdio.h>
main()
{
	int a;
	printf("\n enter a number");
	scanf("%d",a);
	if (a>=0 && a<10)
	printf("\n %d is one digit",a);
	else if (a>=10 && a<100)
	printf("\n %d is two digit",a);
	else if (a>=100 && a<1000)
	printf("\n %d is three digit",a);
	else
	printf("\n %d is more than 3 digit",a);
}
