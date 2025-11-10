#include<stdio.h>
#include<conio.h>
void main ()
{
  int fact(int k);     //function prototype
  int n, r, ncr;
  printf("\n Enter the values of n and r: ");
  scanf("%d %d", &n, &r);
  ncr=fact(n)/(fact(r)*fact(n-r));
  printf("\n The value of nCr is %d", ncr);
  getch ();
}
int fact(int k)     //function declaration
{
    if(k==1)
    return(1);
    else
    return(k*fact(k-1));
    
    
}
