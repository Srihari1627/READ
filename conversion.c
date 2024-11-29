#include<stdio.h>
#include<math.h>
int main()
{
int sec,seconds,hours,minutes;
printf("Enter the no.of seconds");
scanf("%d",&seconds);
printf("Enter the no.of minutes");
scanf("%d",&minutes);
printf("Enter the no.of hours");
scanf("%d",&hours);
hours=floor(sec/3600);
minutes=floor(fmod(sec,3600)/60);
seconds=fmod(sec,60);
printf("hours:minutes:seconds - %d:%d:%d\n",hours,minutes,seconds);
}
