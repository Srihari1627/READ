// WITH ARGUEMENT WITH RETURNTYPE

#include <stdio.h>
int add_numbers(int a, int b)
{
    return a + b;
}
int main()
{
int a,b,sum;
printf("Enter the value of a:\n");
scanf("%d",&a);
printf("Enter the value of b:\n");
scanf("%d",&b);
sum=a+b;
printf("The sum is:%d\n",sum);
return 0 ;
}

