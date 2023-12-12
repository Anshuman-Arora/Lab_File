#include <stdio.h>
int main()
{
printf("----Name- Anshuman Arora----\n----SID:231601048----\n");
    int i,a,b,min,hcf=1;
    printf("Enter any two numbers to find HCF:25");
    scanf("%d%d",&a,&b);
    min = (a<b) ? a:b;
    for(i=1; i<=min; i++)
    {
        if(a%i==0 &&b%i==0)
        {
hcf = i;
        }
    }
    printf("HCF of %d and %d = %d\n",a,b,hcf);
    return 0;
}
