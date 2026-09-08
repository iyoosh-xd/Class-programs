#include<math.h>
#include<stdio.h>
int main()
{
    float pi,r,ar,cir;
    pi=3.1415;
    printf("Enter the radius of circle ");scanf("%f",&r);
    ar=pi*pow(r,2);
    cir=2*pi*r;
    printf("The area of the circle is=%f \n",ar);
    printf("The circumference of the circle is=%f ",cir);
    return 0;

}