#include<stdio.h>
#include<math.h>
int main()
{
int sec,seconds,minutes,hours;
printf("Enter the no.of seconds:\n Enter the no.of minutes:\n Enter the no.of hours:");
scanf("%d%d%d",&seconds,&minutes,&hours);
hours=floor(sec/3600);
minutes=floor(fmod(sec,3600)/60);
seconds=fmod(sec,60);
printf("seconds:minutes:hours - %d:%d:%d\n",seconds,minutes,hours);
}
