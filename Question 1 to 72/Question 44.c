#include <stdio.h>
int main()
{
printf("----Name- Anshuman Arora----\n----SID:231601048----\n");
    int i,n;
    printf("Enter number:");
    scanf("%d", &n);
    printf("All factors of %d are: \n", n);
    for(i=1; i<=n; i++)
    {
        if(n % i == 0)
        {
            printf("%d, ",i);
        }
    }
    return 0;
}
