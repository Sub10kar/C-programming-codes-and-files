#include<stdio.h>
#include<conio.h>
void main()
{
    int a, b, c, big;
    printf("\n Enter the three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    big=a;
    if(b>big)
    big=b;
    if(c>big)
    big=c;
    printf("\n The biggest number is %d", big);
    getch();
}
