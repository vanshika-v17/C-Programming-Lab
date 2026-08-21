/*  
Write a C code to check if a number has even no. of digits or odd no. of digits. Check till 9 digit no.
Test score : INPUT 57 & OUTPUT even digits , INPUT 264 & OUTPUTodd digits.
*/

#include<stdio.h>
#include<math.h>
int main() {

    int num, digits;
    printf("enter a number:");
    scanf("%d", &num);

    if (num >= 0 && num <= 999999999) {
        digits = (int)log10(num) + 1;
        if (digits % 2 == 0) 
            printf("even digits\n");
        else
            printf("odd digits\n");
    }
    else 
        printf("Invalid number\n");

    return 0;
}