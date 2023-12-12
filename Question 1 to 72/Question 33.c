#include <stdio.h>
int main()
{
printf("----Name- Anshuman Arora----\n----SID:231601048----\n");
    int n,f,l;
    printf("Enter any number: ");
    scanf("%d", &n);
    f = n;
    l = n;
    while(f >= 10)
    {
        f = f / 10;
    }
    printf("First digit = %d", f);

    while (l>=10)
    {
        l = l % 10;
    }
    printf("\nLast digit = %d",l);
    return 0;
}
