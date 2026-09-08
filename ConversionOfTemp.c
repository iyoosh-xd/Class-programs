#include<math.h>
#include<stdio.h>
int main()
{
    float c,f;
    printf("Enter the tempetrature in Celsius");scanf("%f",&c);
    f=(9*c/5)+32;
    printf("The temperature in degree Fahrenheit=%f ",f);
    return 0;
}