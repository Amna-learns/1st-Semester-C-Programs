#include<stdio.h> //a program to find the cube of a number.
int main() 
{
    int number, cube_of_number;
    printf("Enter the number : ");
    scanf("%d", &number);
    cube_of_number = (number * number * number);
    printf("The cube of %d is %d", number, cube_of_number);
    return 0;
}