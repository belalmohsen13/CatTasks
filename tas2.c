#include <stdio.h>
#include <stdlib.h>
int summation(int x,int y);
int main()
{
    int x,y;
    printf("enter your first number:");
    scanf("%d",&x);
    printf("enter your second number:");
    scanf("%d",&y);
    int z =summation(x,y);
    printf("your summation is %d",z);
    return 0;
}

int summation(int x,int y)
{
int sum =x+y;
return sum;
}
