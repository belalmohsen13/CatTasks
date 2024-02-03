#include <stdio.h>
#include <stdlib.h>
void multiplication (int arr1 [],int arr2 [],int result[],int size);
int main()
{
    int arr1[10];
    int arr2[10];
    int result[10];
    int size;
printf("Enter the size of the arrays:");
scanf("%d",&size);

printf("Enter the elements of the first array: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr1[i]);
    }
printf("Enter the elements of the second array: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr2[i]);
    }

multiplication(arr1, arr2, result, size);

printf("Result: ");
    for (int i=0;i<size;i++)
    {
        printf("%d\n",result[i]);
    }
   ;
    return 0;
}
void multiplication (int arr1[],int arr2[],int result[],int size)
{
    for(int i=0;i<size;i++)
    {
        result[i]=arr1[i]*arr2[i];
    }
}


