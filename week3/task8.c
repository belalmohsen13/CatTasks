#include <stdio.h>
#define arrsize 5
void fun(int *ptr,int *max,int *min);
int main()
{
    int arr[arrsize];
    int max,min;
    printf("enter your array elements ");
    for(int i=0; i<arrsize; i++)
    {
        scanf("%d",&arr[i]);
    }
    fun(&arr,&max,&min);
    printf("min value: %d\n", min);
    printf("max value: %d\n", max);

    return 0;
}

void fun(int *arr,int *max,int *min){
    for(int i=0;i<arrsize;i++)
    {
        *min=arr[0];
        *max=arr[0];
       if(arr[i]>*max)
       {
        *max=arr[i];
       }
       if(arr[i]<*min)
       {
        *min=arr[i];
       }


    }

}


