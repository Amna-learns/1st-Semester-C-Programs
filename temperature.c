#include<stdio.h> // a program to check whether the temperature is above 30 or not.
int main() 
{
    int temperature;
    printf("Enter the temperature : ");
    scanf("%d", &temperature);

    if (temperature > 30) 
       { printf("The temperature is above 30./n");}
    else if (temperature < 30)
       { printf("The temperature is below 30./n");}
    else
       { printf("The temperature is 30./n");}
    return 0;
}