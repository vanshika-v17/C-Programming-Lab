/*
Check the grades & assign it to a category.
if ( A ,A++ excellent)
if ( B, B++ good)
if ( C, C++ needs improvement) 
*/

#include<stdio.h>
int main() {

    char grade;
    printf("enter grade");
    scanf("%c", &grade);

    switch (grade) {

        case 'A' :
        case 'a' :
        printf("Excellent\n");
        break;

        case 'B' :
        case 'b' :
        printf("Good\n");
        break;

        case 'C' :
        case 'D' :
        printf("Needs Improvement\n");
        break; 

        default:
        printf("Invalid Statement\n");
        
    }

    return 0;
}