#include<stdio.h>
main()
{
	int a,b,c;
	printf("\n enter the values of three numbers");
	scanf("%d%d%d",&a,&b,&c);
	if (a>b && a>c)
	printf("\n %d is big",a);
	else if (a<b && c<b)
	printf("\n %d is big",b);
	else if (c>a && c>b)
	printf("\n %d is big",c);
	else
	printf("\n all are equal");
}
