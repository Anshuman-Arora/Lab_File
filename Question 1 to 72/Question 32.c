#include<stdio.h>
int main()
{
	printf("----Name- Anshuman Arora----\n----SID:231601048----\n");
	int n,b=0;
	printf("Enter NO Here:-");
	scanf("%d",&n);
	while(n!=0)
	{
		n/=10;
		b++;
	}
	printf("%d",b);
	return 0;
}
