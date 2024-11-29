#include <stdio.h>

void absolute_value(int x)
{
    if (x < 0)
     {
        x = -x; 
     }
    printf("The absolute value is: %d\n", x);
}

int main() 
{
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    absolute_value(number);

    return 0;
}
