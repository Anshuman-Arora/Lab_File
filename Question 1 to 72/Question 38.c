#include <stdio.h>
int main()
{
printf("----Name- Anshuman Arora----\n----SID:231601048----\n");
    int n, rev = 0;
    printf("Enter any number to find reverse: ");
    scanf("%d", &n);
    while(n!=0)
    {
        rev = (rev * 10) + (n % 10);
        n /= 10;
    }
    printf("Reverse of %d is : %d",n,rev);
    return 0;
}