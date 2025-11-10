#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i;
    float s;
    printf("\n Enter the value of N: ");
    scanf("%d", &n);
    s=0;
    for(i=0;i<=n;i++)
    s=s+1.0/n;
    printf("The required sum of series is %8.4f",s);
    getch();
    
    
    
}
