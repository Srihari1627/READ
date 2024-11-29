#include<stdio.h>
int square(int x);
int main()
{
int number,result;
printf("Enter a number:\n");
scanf("%d",&number);
result =  square(number);
printf("Square of %d = %d\n",number,result);
}
int square(int x)
{
return x*x;
}

