
#include <stdio.h>

void main()
{
    int n,rem;
    printf("Enter a number from 1 to 72 : ");
    scanf("%d",&n);
    rem=n%8;
    if(rem==0)
    {
        printf("SU");
    }
    else if(rem==1 || rem==4)
    {
        printf("L");
    }
    else if(rem==2 || rem==5)
    {
        printf("M");
    }
    else if(rem==3 || rem==6)
    {
        printf("U");
    }
    else
    {
        printf("SL");
    }
}


