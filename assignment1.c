#include<stdio.h> // a program to find sum, product and average of 5 given numbers.
int main()
{
    int a, b, c, d, e;
    a=2, b=4, c=6, d=8, e=10;
    
    int sum = a + b + c + d + e;
    printf("sum = %d\n", sum);

    int product = a * b * c * d * e;
    printf("product =%d\n", product);

    float average = sum / 5;
    printf("average = %f\n", average);

    return 0;
}