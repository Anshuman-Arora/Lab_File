#include <stdio.h>
int main()
{
printf("----Name- Anshuman Arora----\n----SID:231601048----\n");
    int rows, cols, i, j;
    /* Input rows and columns from user */
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);
    /* Iterate through rows */
    for(i=1; i<=rows; i++)
    {
        /* Iterate through columns */
        for(j=1; j<=cols; j++)
        {
            printf("1");
        }
        printf("\n");
    }
    return 0;
}
