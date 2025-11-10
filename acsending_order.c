#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,j,temp, x[100];
    printf("\n How many numbers do you want to enter? ");
    scanf("%d", &n);
    printf("\n Enter the list of %d numbers: ",n);
    for(i=0;i<n;i++)
    scanf("%d",&x[i]);
    for(i=0;i<n-1;i++)
    for(j=i+1;j<n;j++)
    if(x[i]>x[j])
    {
        temp=x[i];
        x[i]=x[j];
        x[j]=temp;
    }
    printf("\n The numbers in acsending order are: ");
    for(i=0;i<n;i++)
    printf("\n %d",x[i]);
    getch();
}
