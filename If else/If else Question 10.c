#include <stdio.h>
int main()
{
printf("----Name- Anshuman Arora----\n----SID:231601048----\n");
    char ch;
    /* Input character from user */
    printf("Enter any character: ");
    scanf("%c", &ch);
    if(ch>= 'A' &&ch<= 'Z')
    {
        printf("'%c' is uppercase alphabet.", ch);
    }
    else if(ch>= 'a' &&ch<= 'z')
    {
        printf("'%c' is lowercase alphabet.", ch);
    }
    else
    {
        printf("'%c' is not an alphabet.", ch);
    }
    return 0;
}
