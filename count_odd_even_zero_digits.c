#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    long int n;
    int count(int n);
    printf("\n Enter the number: ");
    scanf("%ld",&n);
    count(n);
    getch();
}

int count(int n)
{
    int zero_count=0;
     int even_count=0;
      int odd_count=0;
      while(n>0)
      {
          int rem=n%10;
          if(rem==0)
          zero_count++;
          else if(rem%2==0)
          even_count++;
          else
          odd_count++;
          n=n/10;
      }
      printf("\n The number of zero digits is %d", zero_count);
      printf("\n The number of even digits is %d", even_count);
      printf("\n The number of odd digits is %d", odd_count);
      return 0;
}