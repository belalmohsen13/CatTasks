#include <stdio.h>


char *strcpy2(char *copy, const char *org);
int main()
{

    char arr1[10]="hello";
    char arr2[10];
    strcpy2(arr2,arr1);
    printf("%s",arr2);
    return 0;
}
char *strcpy2(char *copy, const char *org)
{
    int i = 0;
    while (org[i] != NULL)
    {
        copy[i] = org[i];
        i++;
    }
    copy[i] = NULL;

    return copy;
}

