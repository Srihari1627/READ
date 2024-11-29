#include <stdio.h>
#include <math.h>
int main()
{
int choice;
float a,b,c;
float root1,root2,imaginary_part,real_part;
float discriminant;
printf("Enter the coefficients of a\n");
scanf("%f",&a);
printf("Enter the coefficients of b\n");
scanf("%f",&b);
printf("Enter the coefficients of c\n");
scanf("%f",&c);
discriminant = b*b-4*a*c;
if (discriminant > 0)
{
choice=1;
}
else if (discriminant == 0) 
{
choice=2;
}
else 
{
choice=3;
}
switch(choice)
{
case 1 :
root1=((-b+sqrt(discriminant))/2*a);
root2=((-b-sqrt(discriminant))/2*a);
printf("Roots are real and distinct\n");
printf("root1=%.2f\n",root1);
printf("root2=%.2f\n",root2);
break;
case 2 :
root1=((-b)/(2*a));
printf("Roots are real and repeated\n");
printf("Root = %.2f\n",root1);
break;
case 3 :
real_part=-b/(2*a);
imaginary_part=sqrt(-discriminant)/(2*a);
printf("Roots are distinct and complex\n");
printf("root1 = %.2f + %.2f",real_part,imaginary_part);
printf("root2 = %.2f - %.2f",real_part,imaginary_part);
break;
default:
printf("Invalid case\n");
break;
}
return 0;
}
