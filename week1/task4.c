#include <stdio.h>
#include <limits.h>

void bubblesort(int arr1[],int size);

int main(){
    int arr1[10];
    int size;

printf("Enter the size of the arrays:");
scanf("%d",&size);

printf("Enter the elements of the first array: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr1[i]);
    }

bubblesort(arr1,size);

printf("Result After bubble sort: ");
    for(int i=0;i<size;i++)
    {
        printf("%d\n",arr1[i]);
    }

    return 0;
}
void bubblesort(int arr1[],int size)
{
    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-i-1;j++)
        {
            if(arr1[j]>arr1[j+1])
            {
            int temp =arr1[j];
            arr1[j]=arr1[j+1];
            arr1[j + 1] = temp;
            }
        }
    }

}


