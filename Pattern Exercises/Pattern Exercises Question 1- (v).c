#include<stdio.h>
int main()
{
printf("----Name- Anshuman Arora----\n----SID:231601048----\n");
    int i, j, N, columns;
    /* Input number of columns from user */
    printf("Enter number of columns:");
    scanf("%d",&N);
    columns=1;
    for(i=1;i<N*2;i++)
    {
        for(j=1; j<=columns; j++)
        {
            printf("*");
        }
        if(i< N)
        {
            /* Increment number of columns per row for upper part */
            columns++;
        }
        else
        {
            /* Decrement number of columns per row for lower part */
            columns--;
        }
        /* Move to next line */
        printf("\n");
    }
    return 0;
}
