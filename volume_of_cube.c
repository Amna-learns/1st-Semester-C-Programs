#include<stdio.h>
int main() {
    float side;
    printf("enter the length of side : ");
    scanf("%f", &side);
    float volume = side * side * side;
    printf("volume of cube is : %f", volume);
    return 0;
}