#include <stdio.h>
int MaxNumber(int x,int y,int z,int k);
int main()
{
    int num1,num2,num3,num4;
    int max;
    printf("enter your four numbers");
    scanf("%d%d%d%d",&num1, &num2, &num3, &num4);
    max=MaxNumber(num1,num2,num3,num4);
    printf(" your max number %d",max);
    return 0;
}


int MaxNumber(int x,int y,int z,int k)
{
    int max =x;
        if (y>max)
            max=y;
        if (z>max)
            max=z;
        if (k>max)
            max=k;


    return max;

}
