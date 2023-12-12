#include <stdio.h>
int main()
{
printf("----Name- Anshuman Arora----\n----SID:231601048----\n");
    int n,f,l,s;
    printf("Enter any number: ");
    scanf("%d", &n);
    f = n;
    l = n;
    s=f/10;
    while(f >= 10)
    {
        f = f / 10;
    }
    while (l>=10)
    {
        l = l % 10;
    }

    printf("%d%d%d",l,s,f);
    return 0;
}
