// WITH ARGUMENT WITHOUT RETURNTYPE

#include<stdio.h>
void addnumbers(int x,int y)
{
int sum = x+y;
}

int main()
{
int x,y,sum;
printf("Enter the value of x:\n");
scanf("%d",&x);
printf("Enter the value of y:\n");
scanf("%d",&y);
sum=x+y;
printf("The sum is:%d\n",sum);
return 0 ;
}
