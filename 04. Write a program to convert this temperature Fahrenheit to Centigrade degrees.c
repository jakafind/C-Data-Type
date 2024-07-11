#include<stdio.h>
int main()
{
float C, F;
printf("Enter Fahrenheit Value: ");
scanf("%f", &F);
C = (F-32)/1.8;
printf("The Centigrade Value : %.2f \n", C);
return 0;
}
