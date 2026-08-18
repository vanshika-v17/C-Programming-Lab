/*  
Write a C code to check if a number has even no. of digits or odd no. of digits. Check till 9 digit no.
Test score : INPUT 57 & OUTPUT even digits , INPUT 264 & OUTPUTodd digits.
*/

#include<stdio.h>
int main() {
    int num;
    printf("enter num : ");
    scanf("%d", &num);
    // only checking till 9 digit numbers

    if( num >= 0 && num <= 999999999) {
        if (( num >= 0 && num <= 9 ) || ( num >= 100 && num <= 999 ) || ( num >= 10000 && num <= 99999) || (  num >= 1000000 && num <= 9999999) ||( num >= 100000000 && num <= 999999999))
        {   
            printf("odd digits\n");
        }
        else {
            printf("even digits\n"); }
        }
    else {
        printf("Invalid num\n");
    }

    return 0;
}

