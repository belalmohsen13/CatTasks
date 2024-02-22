#include <stdio.h>

void dbconverter(int num, int binaryarr[]);

int main()
{
    int number;
    int binaryarr[32];
    int zerosbits = 0;
    int onesbits = 0;

    printf("Enter a decimal number: ");
    scanf("%d", &number);

    dbconverter(number, binaryarr);

    for (int i = 0; i < 32; i++)
    {
        if (binaryarr[i] == 0)
        {
            zerosbits++;
        }
        else
        {
            onesbits++;
        }
    }

    printf("Number of zeros: %d\n", zerosbits);
    printf("Number of ones: %d\n", onesbits);

    return 0;
}

void dbconverter(int num, int binaryarr[])
{
    int i = 0;
    while (num > 0)
    {
        binaryarr[i] = num % 2;
        num /= 2;
        i++;
    }
}
