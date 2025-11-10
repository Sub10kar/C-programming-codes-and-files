#include<stdio.h>
#include<conio.h>
void main()
{
  int x,y,nr,dr,r;
  printf("\n Enter any two numbers: ");
  scanf("%d %d", &x, &y);
  if(x>=y)
  { 
      nr=x;
      dr=y;
  }
  else
  { 
      nr=y;
      dr=x;
  }
  r=nr%dr;
  while(r!=0)
  {
      nr=dr;
      dr=r;
      r=nr%dr;
  }
  printf("\n The GCD is given by %d", dr);
  getch ();
}
