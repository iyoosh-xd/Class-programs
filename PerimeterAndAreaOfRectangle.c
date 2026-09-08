#include<stdio.h>
#include<math.h>
int main()
{
    float l,b,p,a;
    printf("Enter the Length and Breadth of rectangle respectively");
    scanf("%f%f",&l,&b);
    a=l*b;
    p=2*(l+b);
    printf("The area of retangle is=%f \n",a);
    printf("The perimeter of retangle is=%f ",p);
    return 0;
}