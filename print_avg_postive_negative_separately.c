#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    float x[100], psum,nsum,avgp,avgn;
    int n,i,count1,count2;
    printf("\n How many numbers do you want to enter? ");
    scanf("%d", &n);
    printf("\n Enter the list of %d numbers ",n);
    for(i=0;i<n;i++)
    scanf("%f", &x[i]);
    psum=0;
    nsum=0; 
    count1=0;
    count2=0;
    for(i=0;i<n;i++)
    {
        if(x[i]>0)
        {
            psum=psum+x[i];
            count1++;
        }
        else
        {
            nsum=nsum+x[i];
            count2++;
        }
    }
    avgp=psum/count1;
    avgn=nsum/count2;
    printf("\n The average of the postive numbers is: %6.4f",avgp);
    printf("\n The average of the negative numbers is: %6.4f",avgn);
    getch();
}
