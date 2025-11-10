#include<stdio.h>
#include<conio.h>
void main()
{  
    int n,i,maximum,minimum,x[50];
    float sum=0.0, average;
    printf("\n How many numbers do you want to enter? ");
    scanf("%d",&n);
    printf("\n Enter the list of %d numbers \n",n);
    for(i=0;i<n;i++)
    scanf("%d", &x[i]);
    
    /* to find maximum */
    
    maximum=x[0];
    for(i=0;i<n;i++)
    if(x[i]>maximum)
    maximum=x[i];
    printf("\n The required maximum is %d", maximum);
    
    /* to find minimum */
    
    minimum=x[0];
    for(i=0;i<n;i++)
    if(x[i]<minimum)
    minimum=x[i];
    printf("\n The required minimum is %d", minimum);
    
    /* to find sum and average */
    
     for(i=0;i<n;i++)
     sum=sum+x[i];
     average=sum/n;
     printf("\n The required sum is: %6.2f", sum);
     printf("\n The required average is: %6.2f", average);
     getch();
     
    
    
    
    
    
    
    
    
    
    
    
}
