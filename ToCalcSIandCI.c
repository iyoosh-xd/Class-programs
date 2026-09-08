#include<math.h>
#include<stdio.h>
int main()
{
    float si,ci,r,p,t,a,pw;
    printf("Enter the principle amount ");scanf("%f",&p);
    printf("Enter the rate of interest ");scanf("%f",&r);
    printf("Enter the time period ");scanf("%f",&t);
    si=(p*r*t)/100;
    a=p*pow((1+(r/100)),t);
    ci=a-p;
    printf("simple interest=%f \n",si);
    printf("compound interest=%f ",ci);
    return ;
    
}