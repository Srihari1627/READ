#include<stdio.h>
int main()
{ 
float distance,time,speed ;
printf("Enter the distance");
scanf("%f",&distance);
printf("Enter the time");
scanf("%f",&time);
speed = distance/time;
printf("the speed of the vehicle is:%f\n",speed);
return 0;
}

