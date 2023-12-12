#include <stdio.h>
int main()
{
printf("----Name- Anshuman Arora----\n----SID:231601048----\n");
    int i, n,s=0;
    printf("Enter number:");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        s += i;
    }
    printf("Sum of 1 to %d natural numbers = %d", n, s);

    return 0;
}
