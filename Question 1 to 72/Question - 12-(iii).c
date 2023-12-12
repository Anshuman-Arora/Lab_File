#include <stdio.h>
#include <math.h>
int main()
{
printf("----Name- Anshuman Arora----\n----SID:231601048----\n");
    float a, b, c;
    float s, area;
    printf("Enter the lengths of the three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);
    s = (a + b + c)/2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("The area of the triangle is: %.2f\n", area);
    return 0;
}
