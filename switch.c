#include<stdio.h>
int main()
{
int a,b,s,choice;
printf("Enter the value of a:");
scanf("%d" ,&a);
printf("Enter the value of b:");
scanf("%d" ,&b);
printf("1.Addition\n2.Substraction\n3.Multiplication\n4.Division\n");
printf("Enter your operator which you want to perform :");
scanf("%d" ,&choice);
switch(choice)
{
case 1: 
s = a+b;
printf("%d" ,s);
break;
case 2:
s = a-b;
printf("%d" ,s);
break;
case 3:
s = a*b;
printf("%d" ,s);
break;
case 4:
s = a/b;
printf("%d" ,s);
break;
default :
printf("choice is not available\n");
}}
