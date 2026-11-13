#include<stdio.h> //a program to calculate the perimeter of rectangle.
int main() {
    int length, breadth, perimeter;
    printf("enter lenth and breadth");
    scanf("%d %d", &length, &breadth);
perimeter = 2*(length+breadth);
    printf("perimeter of rectangle = %d", perimeter);
    return 0;
}