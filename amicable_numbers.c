#include<stdio.h>
#include<conio.h>
void main()
{
   int i,num1,num2,divisorsum1,divisorsum2;
   printf("\n Enter two numbers: ");
   scanf("%d %d", &num1,&num2);
   divisorsum1=0;
   divisorsum2=0;
   i=1;
   for(i=1;i<num1;i++)
   if(num1%i==0)
   divisorsum1=divisorsum1+i;
   for(i=1;i<num2;i++)
   if(num2%i==0)
   divisorsum2=divisorsum2+i;
   if(num1==divisorsum2&&num2==divisorsum1)
   printf("\n The given pair of numbers are amicable.");
   else 
   printf("\n The given pair of numbers are not amicable.");
   getch();
}
