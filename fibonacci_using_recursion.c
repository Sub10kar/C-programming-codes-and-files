#include<stdio.h>
#include<conio.h>
int n,n1,n2,newterm, count;
void main ()
{
    int fibo(int a,int b);
    printf("\n Enter the number of terms of the series: ");
    scanf("%d", &n);
    n1=0;
    n2=1;
 
    printf("%5d %5d", n1, n2);
    count=2;
    fibo(n1,n2);
    getch();
 }

int fibo(int n1, int n2)
{
    if(count>=n)
    return 0;
    else
    { 
        newterm=n1+n2;
        printf("%5d", newterm);
        n1=n2;
        n2=newterm;
        count++;
        fibo(n1,n2);
        
    }
    
    
}
