#include<stdio.h> // a program to print numbers from 0 to n
int main()
{
    int i, n;
    printf("enter the value of n: ");
    scanf("%d", &n);
    for(int i=0; i<=n; i=i+1)
    {printf("%d\n", i);}
    return 0;
}