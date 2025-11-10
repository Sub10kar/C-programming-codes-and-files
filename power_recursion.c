#include<stdio.h>
#include<conio.h>
void main()
{
    float power(float a, int b);
    int n;
    float x;
    printf("\n Enter the value of x: ");
    scanf("%f",&x);
    printf("\n Enter the value of n: ");
    scanf("%d", &n);
    printf("\n Required value is %f", power(x,n));
    getch();
}
float power(float x, int n)
{
    if(n==1)
    return(x);
    else
    return(x*power(x,n-1));
}