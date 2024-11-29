#include<stdio.h>

int find_max(int a,int b,int c)
{
int max=a;
if (b > max)
{
max = b;
}
if (c > max)
{
max = c;
}
return max;
}
int main()
{
int a,b,c;
printf("Enter the value of a:");
scanf("%d",&a);
printf("Enter the value of b:");
scanf("%d",&b);
printf("Enter the value of c:");
scanf("%d",&c);

int max_value =  find_max(a,b,c);
printf("The maximum number in all is :%d\n",max_value);
return 0;
}
