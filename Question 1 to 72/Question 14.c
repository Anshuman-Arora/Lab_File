#include <stdio.h>
int main()
{
printf("----Name- Anshuman Arora----\n----SID:231601048----\n");
    float l, w, h;
    float A, V;
    printf("Enter the length, width, and height of the cuboid:");
    scanf("%f %f %f", &l, &w, &h);
    A = 2 * (l * w + l * h + w * h);
    V = l * w * h;
    printf("The area of the cuboid is %.2f square units\n", A);
    printf("The volume of the cuboid is %.2f cubic units\n", V);
    return 0;
}
