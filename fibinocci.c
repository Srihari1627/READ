#include <stdio.h>
int main() 
{
int n, first = 0, second = 1, next;
printf("Enter the number of terms for Fibonacci series: ");
scanf("%d", &n);
printf("Fibonacci Series up to %d terms:\n", n);
int count = 0; 
while (count < n) 
{
if (count == 0) 
{
printf("%d ", first); 
}
else if (count == 1) 
{
printf("%d ", second);
}
else 
{
next = first + second; 
printf("%d ", next);
first = second; 
second = next;  
}
count++; 
}
printf("\n"); 
return 0;
}

