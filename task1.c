#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=10;
    printf("%d\n",x);
    int *ptr=&x;
    printf("%d\n",*ptr);
    *ptr=20;
    printf("%d",*ptr);
    return 0;
}
