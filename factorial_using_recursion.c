#include<stdio.h>
#include<conio.h>
void main ()
{
  int fact(int k);     //function prototype
  int n, factorial;
  printf("\n Enter a number: ");
  scanf("%d", &n);
  factorial=fact(n);     //function call
  printf("\n The factorial is %d", factorial);
  
  getch ();
}
int fact(int k)     //function declaration
{
    if(k==1)
    return(1);
    else
    return(k*fact(k-1));
    
    
}
