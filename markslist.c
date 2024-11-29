#include<stdio.h>
 int main()
{
float Mathsmarks,Physicsmarks,Computermarks,Chemistrymarks,Englishmarks,Sanskritmarks,Totalmarks;
printf("Mathsmarks:\nPhysicsmarks:\nComputermarks\nChemistrymarks:\nEnglishmarks:\nSanskritmarks:\n");
scanf("%f%f%f%f%f%f",&Mathsmarks ,&Physicsmarks ,&Computermarks ,&Chemistrymarks ,&Englishmarks ,&Sanskritmarks);
Totalmarks= Mathsmarks+Physicsmarks+Computermarks+Chemistrymarks+Englishmarks+Sanskritmarks;
printf("The total marks are:%f\n",Totalmarks);
}
