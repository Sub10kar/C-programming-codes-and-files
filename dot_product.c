#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{ 
    int x[50],y[50],dot,s,i;
    printf("\n Enter the size of the two vectors: ");
    scanf("%d", &s);
    printf("\n Enter the first vector: ");
    for(i=0;i<s;i++)
    scanf("%d",&x[i]);
    printf("\n Enter the second vector: ");
    for(i=0;i<s;i++)
    scanf("%d",&y[i]);
    dot=0;
    for(i=0;i<s;i++)
    dot=dot+x[i]*y[i];
    printf("\n The dot of the two vectors is %d", dot);
    getch();
}
    
