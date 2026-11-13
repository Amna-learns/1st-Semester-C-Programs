#include<stdio.h> // a program to find acceleration of a moving object given mass and force.
int main() {
    int mass, force;
    printf("enter mass of the object : ");
    scanf("%d", &mass);
    printf("enter applied force on object : ");
    scanf("%d", &force);

    float acceleration;
    acceleration = (float)force / (float)mass;
    printf("acceleration of the object is : %f", acceleration);
    return 0;
}
    