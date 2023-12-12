#include <stdio.h>
#include <math.h>
int main()
{
printf("----Name- Anshuman Arora----\n----SID:231601048----\n");
    float a, b;
    float area;
    printf("Enter the lengths of the equal sides and the base of the isosceles triangle: ");
    scanf("%f %f", &a, &b);
    area = (b * sqrt((4 * a * a) - (b * b)))/4;
    printf("The area of the isosceles triangle is: %.2f\n", area);
    return 0;
}
