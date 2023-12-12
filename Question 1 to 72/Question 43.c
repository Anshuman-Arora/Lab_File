#include <stdio.h>
int main()
{
printf("----Name- Anshuman Arora----\n----SID:231601048----\n");
    int base,power=1,e,i;
    printf("Enter base: ");
    scanf("%d",&base);
    printf("Enter exponent: ");
    scanf("%d",&e);
    for(i=1;i<=e; i++)
    {
        power = power * base;
    }
    printf("%d ^ %d = %d", base, e, power);
    return 0;
}
