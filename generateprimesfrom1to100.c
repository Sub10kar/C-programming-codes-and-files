#include<stdio.h>
#include<conio.h>
void main()
{
 int n,i,flag=0;
 for(n=2;n<100;n++)
 {
     for(i=2;i<=n/2;i++)
     {
         if(n%i==0)
         {
             flag=1;
             break;
         }
     }
     if(flag==0)
     printf("\n %d \t",n);
     flag=0;
     getch();
 }
}

