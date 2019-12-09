#include <stdio.h>
int main()
{
    int c;
    printf("Enter the day");
    scanf("%d",&c);
    switch(c)
    {
        case 1:printf("\n Sunday"); break;
        case 2:printf("\n monday"); break;
        case 3:printf("\n tuesday"); break;
        case 4:printf("\n wednesday"); break;
        case 5:printf("\n thursday"); break;
        case 6:printf("\n friday"); break;
        case 7:printf("\n saturday"); break;
        default:printf("invalid"); break;
    }
    
}
