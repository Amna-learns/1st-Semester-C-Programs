#include<stdio.h> // multiplication table.
int main() 
{
    int num, i=1;
    printf("Enter a number : ");
    scanf("%d", &num);
    while(i<=10) // while loop will run from 1 to 10.
    { printf("%d * %d = %d\n", num, i, num*i);
        i++;}
        return 0;
    
}