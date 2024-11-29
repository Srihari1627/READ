#include<stdio.h>
double area(double a) 
{
    return a * a;
}
double perimeter(double a)
{
    return 4 * a;
}
int main()
{
int a,area,perimeter;
printf("Enter the value of a for the square:\n");
scanf("%d",&a);
 area =  a*a;
 perimeter = 4*a;
printf("The area of the square is : %d\n",area);
printf("The perimeter of the square is : %d\n",perimeter);

return 0;
}




