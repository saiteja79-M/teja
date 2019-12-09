#include<stdio.h>
main()
{
	int a;
	printf("\n enter a number");
	scanf("%d",&a);
if (a>=0 && a<10)
	printf("\n %d is one digit",a);
if (a>=10 && a<100)
	printf("\n %d is two digit",a);
if (a>=100 && a<1000)
	printf("\n %d is three digit",a);
}
