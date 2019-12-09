#include<stdio.h>
main()
{
	char ch;
	printf("\n enter a character",ch);
	scanf("%c",&ch);
	switch(ch)
	{
		case 'a':printf("\n vowel",ch); break;
		case 'e':printf("\n vowel",ch); break;
		case 'i':printf("\n vowel",ch); break;
		case 'o':printf("\n vowel",ch); break;
		case 'u':printf("\n vowel",ch); break;
		default:printf("\n consonent",ch);
	}
}
