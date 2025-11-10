#include<stdio.h>
#include<conio.h>
void main()
{
    int num1,num2,n,i,sum;
    printf("\n Enter the first number: ");
    scanf("%d", &num1);
    printf("\n Enter the second number: ");
    scanf("%d", &num2);
    printf("\n The perfect numbers within the given range are: ");
    for(n=num1;n<=num2;n++)
    { 
        i=1;
        sum=0;
        while(i<n)
        {
            if(n%i==0)
            sum=sum+i;
            i++;
        }
        if(sum==n)
        printf("\n %d",n);
    }
    getch();
}
