#include<stdio.h> // program to check if a given character is digit or not.
int main()
{
    char cr;
    printf("enter the character:");
    scanf(" %c", &cr);
if( cr >= '0' && cr <= '9' )
    {
    printf("It is a digit");
    }
 else
    {
    printf("it's not a digit");
    }
    return 0;
}