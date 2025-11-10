#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 float x[50], sum,vsum,xbar,sigmax,sd;
 int n,i;
 printf("\n How many values do you want to enter? ");
 scanf("%d", &n);
 printf("\n Enter the list of %d numbers: ",n);
 for(i=0;i<n;i++)
 scanf("%f",&x[i]);
 sum=0;
 for(i=0;i<n;i++)
 sum=sum+x[i];
 xbar=sum/n;
 vsum=0;
 for(i=0;i<n;i++)
 vsum=vsum+(x[i]-xbar)*(x[i]-xbar);
 sigmax=vsum/n;
 sd=sqrt(sigmax);
 printf("\n Arithmetic mean = %6.4f", xbar);
 printf("\n Variance = %6.4f",sigmax);
 printf("\n Standard Deviation = %6.4f", sd);
 getch();
 
 
}
