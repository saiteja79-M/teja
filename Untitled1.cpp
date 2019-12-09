#include<stdio.h>
main()
{
	int a,b;
	printf("\n enter the values of two numbers");
	scanf("%d%d",&a,&b);
	if (a>b)
	printf("\n %d is big",a);
	else if (a<b)
	printf("\n %d is big",b);
	else
	printf("\n both are equal");
}
