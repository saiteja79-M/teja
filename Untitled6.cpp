#include<stdio.h>
main()
{
	int a;
	printf("\n enter the value of");
	scanf("%d",&a);
	if (a%5==0 && a%11==0)
	printf("\n %d is divisible",a);
	else
	printf("\n %d is not divisible",a);
	
}
