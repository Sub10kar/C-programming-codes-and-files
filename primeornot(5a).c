#include<stdio.h>
#include<conio.h>
void main()
{
   int n,i,flag=0;
   printf("\n Enter any number: ");
   scanf("%d", &n);
   for(i=2;i<=n/2;i++)
   {
       if(n%i==0)
       {
           flag=1;
           break;
       }
   }
    if(flag==0)
    printf("\n The number is a prime number.");
    else
    printf("\n The number is not a prime number. ");
    getch();
}

