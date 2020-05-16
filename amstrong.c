
#include<stdio.h>
void main( int argc, char *argv[])
{
    int i, temp, rem, sum;
    int n=atoi(argv[1]);
    printf("%d\n",n);
    printf("Armstrong numbers between 1 and %d are:\n",n);
    for(i=1; i<=n; i++)
    {
        temp=i;
        sum=0;
        while(temp>0)
        {
        rem=temp%10;
        sum=sum+(rem*rem*rem);
        temp=temp/10;
        }
        if(i==sum)
        {
            printf("\n%d", i);
        }
    }
}


