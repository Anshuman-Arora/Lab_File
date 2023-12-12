#include <stdio.h>
int main()
{
printf("----Name- Anshuman Arora----\n----SID:231601048----\n");
    int i,j,cur,lastDigit,n,fact,sum=0;
    printf("Enter upper limit:");
    scanf("%d",&n);
    printf("All Strong numbers between 1 to %d are:\n",n);
    for(i=1; i<=n; i++)
    {
        cur = i;
        while(cur > 0)
        {
            fact = 1ll;
lastDigit = cur % 10;
            for( j=1; j<=lastDigit; j++)
            {
                fact = fact * j;
            }
            sum += fact;
            cur /= 10;
        }
        if(sum == i)
        {
            printf("%d, ", i);
        }
    }
    return 0;
}
