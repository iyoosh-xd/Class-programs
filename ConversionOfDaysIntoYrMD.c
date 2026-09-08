#include<stdio.h>
#include<math.h>
int main()
{
    int d, yr, m, rd;

    printf("Enter number of days: ");
    scanf("%d", &d);

    yr = d / 365;
    d = d % 365;

    m = d / 30;
    rd = d % 30;

    printf("Years = %d\n", yr);
    printf("Months = %d\n", m);
    printf("Remaining Days = %d\n", rd);

    return 0;
}
