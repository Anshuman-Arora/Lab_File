#include <stdio.h>
int main()
{
printf("----Name- Anshuman Arora----\n----SID:231601048----\n");
    char gender;
    printf("Enter the gender character (M/m or F/f): ");
    scanf("%c", &gender);
    switch(gender)
    {
        case 'M':
        case 'm':
            printf("The gender is Male.\n");
            break;
        case 'F':
        case 'f':
            printf("The gender is Female.\n");
            break;
        default:
            printf("The gender is Unspecified.\n");
            break;
    }
    return 0;
}
