#include <stdio.h>

int main()
{
    int x,y;
    int sum =0;
    char Operator;
    printf("enter your first number");
    scanf("%d",&x);

    printf("enter your second number");
    scanf("%d",&y);

    printf("enter your operator (+,-,/,*)\n");
    scanf(" %c",&Operator);
    switch(Operator)
    {
    case'+':
        sum=x+y;
        printf("your result %d",sum);
        break;
    case'-':
        sum=x-y;
        printf("your result %d",sum);
        break;
    case'/':
        if (y != 0)
        {
            sum = x / y;
            printf("Your result: %d\n", sum);
        }
        else
        {
            printf("error: division by zero");
        }
        break;
    case'*':
        sum=x*y;
        printf("your result %d",sum);
        break;
    default:
        sum=x+y;
        printf("wrong operator");
        break;

    }

    return 0;
}
