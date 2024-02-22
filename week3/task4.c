#include <stdio.h>

int main()
{
    int number;
    int sum=0;
    int extra;

    printf("enter your number ");
    scanf("%d",&number);

    while(number!=0)
    {

        extra=number%10;
        sum+=extra;
        number/=10;

    }
    printf("sum=%d ",sum);

    return 0;

}

