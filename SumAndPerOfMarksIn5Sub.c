#include<stdio.h>
int main()
{
    float m1,m2,m3,m4,m5,sum,per;
    printf("Enter marks in 5 subjects");
    scanf("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5);
    sum=m1+m2+m3+m4+m5;
    per=sum/5;
    printf("sum=%f\n",sum);
    printf("percentage=%f",per);
    return 0;
    
}