#include<stdio.h>
int main()
{
int n1,n2,n3;
printf("Enter the three numbers");
scanf("%d%d%d",&n1,&n2,&n3);
if ((n1>n2) &&(n2>n3))
{
printf("%d is greater",n1);
}
else if((n2>n1) &&(n2>n3))
{
printf("%d is greater",n2);
}
else
{
printf("%d is greater",n3\n);
printf("End of the program\n");
}
}
