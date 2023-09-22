#include <stdio.h>

int main(void)
{
    float num1=1;
    float num2,num4,num5;
    int num3,num6;

    printf("Please enter kilometers: ");
    scanf("%f",&num1);

    num2 = num1/1.609;
    num3 = (int)(num2 * 10 + 0.5);
    num4 = (float)num3 /10;

    num6 = (int)(num1 *10);
    num5 = (float)num6/10;


    printf("%.1f km is equal to %.1f miles.\n",num5,num4);

    return 0;

}