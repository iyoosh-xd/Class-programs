#include<stdio.h>
int main()
{
    int a,b,add,sub,mul,div,rem;
    printf("Enter the first no.");scanf("%i",&a);
    printf("Enter the second no.");scanf("%i",&b);
    add=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    rem=a%b;
    printf("The sum of both no. is=%i \n",add);
    printf("The subraction is=%i \n",sub);
    printf("The product of both no. is=%i \n",mul);
    printf("The quotient is=%i \n",div);
    printf("The remainder is=%i ",rem);
    return 0;
}