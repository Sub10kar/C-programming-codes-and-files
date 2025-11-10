#include<stdio.h>
#include<conio.h>
void main()
{
   int n,s,i;
   printf("\n Enter the value of n ");
   scanf("%d", &n);
   s=0;
   for(i=1;i<=n;i++)
   {
       if(i%2==0)
       s=s-i;
       else
       s=s+i;
   }
    
    printf("\n The required sum of the series is %d", s);
    getch();
    
}
