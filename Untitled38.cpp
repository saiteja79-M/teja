#include<stdio.h>
main()
{
	int r,n,sum=0,temp;
		printf("\n enter values");
		scanf("%d",&n);
		temp=n;
		while(n>0)
	{
		r=n%10;
		sum=(sum*10)+r;
		n=n/10;
	}
	if(sum==temp)
	printf("\n palindrome");
	else
	printf("not palindrome");
}
