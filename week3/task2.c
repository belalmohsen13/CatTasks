#include <stdio.h>

int main()
{
    int year ;
    printf("enter your year ");
    scanf("%d",&year);

    if (year%400==0||year%4==0&year%100!=0)
    {
        printf(" it's leap year");
    }
    else
    {
        printf("it's not leap year");
    }


    return 0;
}
