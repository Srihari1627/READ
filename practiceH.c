#include<stdio.h>
int main()
{
int age;
printf("Enter the age:");
scanf("%d",&age);
if (age>18)
printf("%d is elgible to vote",age);
else
printf("%d is  not elgible to vote",age);
}
