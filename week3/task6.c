#include <stdio.h>

int main()
{
    int arrsize;
    int ecounter=0,ocounter=0;

    printf("enter your array size: ");
    scanf("%d",&arrsize);

    int arr[arrsize];

    printf("enter your array elements ");
    for(int i=0; i<arrsize; i++)
    {
        scanf("%d",&arr[i]);
    }


    for(int i=0; i<arrsize; i++)
    {
        {
            if((arr[i]%2)==0)
            {
                ecounter++;
            }
            else
            {
                ocounter++;
            }
        }


    }
    printf("total even number is %d\n",ecounter);
    printf("total odd number is %d",ocounter);
    return 0;
}

