#include <stdio.h>
#include <math.h>
int isArmstrong(int num) 
{
int originalNum = num, remainder, result = 0, n = 0;
while (originalNum != 0)
{
originalNum /= 10;
n++;
}
originalNum = num;
while (originalNum != 0) 
{
remainder = originalNum % 10;
result +=(remainder, n);
originalNum /= 10;
}
return result == num;
}
int main() 
{
int rows, i = 0, j;
printf("Enter the number of rows for the star triangle: ");
scanf("%d", &rows);
while (i < rows) 
{
j = 0;
while (j < rows - i - 1) 
{
printf(" ");
j++;
}
j = 0;
while (j < (2 * i + 1)) 
{
printf("*");
j++;
}
printf("\n");
i++;
}
int number;
printf("Enter a number to check if it is an Armstrong number: ");
scanf("%d", &number);
if (isArmstrong(number)) 
{
printf("%d is an Armstrong number.\n", number);
} 
else 
{
printf("%d is not an Armstrong number.\n", number);
}
return 0;
}
