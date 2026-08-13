/*
Write a program to find area and breadth of a rectangle. 
Given that length and perimeter is given by the user.
*/ 

#include<stdio.h>
int main () {

    int length, perimeter, b;

    printf("enter length");
    scanf("%d", &length);

    printf("enter perimeter");
    scanf("%d", &perimeter);

    b = (perimeter-2*length)/2;
    printf("Breadth : %d\n", b);

    printf("Area : %d\n", length*b);

    return 0;
}

