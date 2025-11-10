#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,s;
    printf("\n Enter the value of N: ");
    scanf("%d", &n);
    s=0;
    for(i=1;i<=n;i++)
    s=s+i*i;
    printf("\n The required sum is %d", s);
    getch();
    
    
    
}
