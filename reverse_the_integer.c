#include<stdio.h>
#include<conio.h>
void main ()
{
  long int n,r, rev;
  printf("\n Enter any number: ");
  scanf("%ld", &n);
  rev=0;
  while(n>0)
  {
      r=n%10;
      rev=rev*10+r;
      n=n/10;
  }
  printf("\n The reversed number is %ld", rev);
  getch ();
}
