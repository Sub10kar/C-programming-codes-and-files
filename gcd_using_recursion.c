#include<stdio.h>
#include<conio.h>
void main()
{
    int gcd(int a, int b);
    int n1,n2, value;
    printf("\n Enter two numbers: ");
    scanf("%d %d", &n1, &n2);
    value=gcd(n1,n2);
    printf("\n The GCD of these two numbers is %d",value);
    getch();
}
int gcd(int n1, int n2)
{
    if(n2!=0)
    return(gcd(n2,n1%n2));
    else
    return n1;
}
