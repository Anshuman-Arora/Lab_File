#include <stdio.h>
int main()
{
printf("----Name- Anshuman Arora----\n----SID:231601048----\n");
    int i,a,b,max,lcm=1;
    printf("Enter any two numbers to find LCM: ");
    scanf("%d %d",&a,&b);
    max = (a>b) ? a:b;
i = max;
    while(1)
    {
        if(i%a==0 &&i%b==0)
        {
            lcm = i;
            break;
        }
i += max;
    }
    printf("LCM of %d and %d = %d",a,b,lcm);
    return 0;
}
