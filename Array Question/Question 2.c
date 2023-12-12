#include <stdio.h>
int main()
{
printf("----Name- Anshuman Arora----\n----SID:231601048----\n");
        int n, i, sum = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("The sum of all elements of the array is: %d\n", sum);
    return 0;
}
