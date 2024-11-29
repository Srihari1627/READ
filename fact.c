#include <stdio.h>
unsigned long long factorial(int n)
{
unsigned long long result = 1;
int i = 2;
while (i <= n) 
{
result *= i;
i++;
}
return result;
}
int main()
{
int start, end;
printf("Enter the start and end of the range: ");
scanf("%d %d", &start, &end);
printf("Factorials from %d to %d:\n", start, end);
int i = start;
while (i <= end) {
printf("%d! = %llu\n", i, factorial(i));
i++;
}
return 0;
}

