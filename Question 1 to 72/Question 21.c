#include<stdio.h>
int main()
{
	printf("----Name- Anshuman Arora----\n----SID:231601048----\n");
	int x,p=9,u=7;
	printf("Enter No Here:-");
	scanf("%d",&x);
	if(x%p==0 || x%u==0 )
	{
		printf("\n%d is Divide By 9 or 7 ",x);
	}
	else
	{
		printf("\n%d is Not Divided BY 9 or 7\n ",x);
	}
	return 0;
}
