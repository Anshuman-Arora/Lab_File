#include <stdio.h>
int main()
{
printf("----Name- Anshuman Arora----\n----SID:231601048----\n");
    int i,j,n,P=1;
    printf("Enter numbers to Find prime number:");
    scanf("%d",&n);
    printf("All prime numbers between 1 to %d are:\n",n);
    for(i=2; i<=n; i++)
    {
        for(j=2; j<=i/2; j++)
        {
            if(i%j==0)
            {
                P = 0;
                break;
            }
        }
        if(P==1)
        {
            printf("%d, ", i);
        }
    }
    return 0;
}
