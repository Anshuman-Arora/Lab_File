#include <stdio.h>
int main()
{
printf("----Name- Anshuman Arora----\n----SID:231601048----\n");
    long long decimal, tempDecimal, octal;
    int i, rem, place = 1;

    octal = 0;
    /* Input decimal number from user */
    printf("Enter any decimal number: ");
    scanf("%lld", &decimal);
tempDecimal = decimal;
    /* Decimal to octal conversion */
    while(tempDecimal> 0)
    {
        rem = tempDecimal % 8;
        octal = (rem * place) + octal;
tempDecimal /= 8;
        place *= 10;
    }
    printf("\nDecimal number = %lld\n", decimal);
    printf("Octal number = %lld", octal);
    return 0;
}