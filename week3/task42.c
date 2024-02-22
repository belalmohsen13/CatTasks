#include <stdio.h>

int main()
{
    int num,power;
    int res=1;
    printf("enter your number");
    scanf("%d",&num);
    printf("enter your power");
    scanf("%d",&power);

    for(int i=0; i<power; i++)
    {
       res*=num;
    }
    printf(" your result =%d",res);
    return 0;

}

