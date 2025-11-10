#include<stdio.h>
#include<conio.h>
void main()
{
   int n,n1,n2,newterm;
   printf("\n Enter the last term of the series: ");
   scanf("%d", &n);
   n1=0;
   n2=1;
   printf("%8d %8d", n1,n2);
   newterm=n1+n2;
   while(newterm<=n)
   {
       printf("%8d", newterm);
       n1=n2;
       n2=newterm;
       newterm=n1+n2;
   }
   getch();
}