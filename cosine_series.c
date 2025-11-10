#include<stdio.h>
#include<conio.h>
void main()
{
    float x,term,s;
    int n,i;
    printf("\n Enter the value of x(in radians): ");
    scanf("%f", &x);
    printf("\n Enter the end term power(n): ");
    scanf("%d", &n);
    s=0;
    term=1;
    i=0;
    while(i<=n)
    {
        s=s+term;
        term=(term*x*x*(-1))/((i+1)*(i+2));
        i=i+2;
    }
    printf("\n The required sum of the series is %6.4f", s);
    getch();
}
