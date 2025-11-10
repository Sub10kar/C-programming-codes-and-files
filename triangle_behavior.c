#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
void main()
{
    int side1, side2, side3;
    int checkbehavior(int a, int b, int c);
    int checkrtangled(int a, int b, int c);
    printf("\n Enter the three sides of a triangle: ");
    scanf("%d %d %d", &side1, &side2, &side3);
    if((side1+side2>side3)&&(side2+side3>side1)&&(side1+side3>side2))
    printf("\n The triangle is valid.");
    else
    {
        printf("\n The triangle is not valid.");
        exit(0);
    }
    checkbehavior(side1,side2,side3);
    checkrtangled(side1,side2, side3);
    getch();
}
 int checkbehavior(int a, int b, int c)
 {
     if(a==b&&b==c)
     printf("\n The Triangle is Equilateral triangle");
     else if(a==b||b==c||c==a)
     printf("\n The triangle is Isosceles triangle");
     else
     printf("\n The triangle is Scalene Triangle");
     return 0;
 }
 int checkrtangled(int a, int b, int c)
 {
    if((a*a+b*b==c*c)||(a*a+c*c==b*b)||(b*b+c*c==a*a))
    printf("\n The Triangle is Right angled triangle");
    else
    printf("\n The triangle is not Right angled triangle");
    return 0;
     
     
 }
 
 
 
 
