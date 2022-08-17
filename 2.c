#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int sumNatural(int inputDigit)
{
    if (inputDigit != 0)
    {
        return inputDigit + sumNatural(inputDigit - 1);
    }
    else
        return inputDigit;
}
int main(int argc, const char * argv[])
{
    int num;
    printf("Enter a positive number : ");
    scanf("%d", &num);
    printf("Sum of Natural numbers  = %d", sumNatural(num));
    printf("\n");
    return 0;
}
