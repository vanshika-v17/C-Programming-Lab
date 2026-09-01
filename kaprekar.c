#include<stdio.h>
int main() {
    int num, d1, d2, d3, d4, temp;
    int asc, desc;
    int step = 0;
    int choice;

    // Entering 4 digit number.
    printf("enter num:");
    scanf("%d", &num);

    // Checking whether the num is of 4 digit or not
    if (num < 1000 || num > 9999)
    {
        printf("Invalid num\n");
        return 0;
    }

    // Checking whether all the digits of the num are not same
    if (num % 1111 == 0)
    {
        printf("Invalid input\n");
        return 0;
    }

    while (num != 6174)
    {
        temp = num;

        d4 = temp % 10;
        temp = temp / 10;
        d3 = temp % 10;
        temp = temp / 10;
        d2 = temp % 10;
        temp = temp / 10;
        d1 = temp % 10;

        // swapping the digits
        if (d1 > d2)
        {
            temp = d1;
            d1 = d2;
            d2 = temp;
        }

        if (d1 > d3)
        {
            temp = d1;
            d1 = d3;
            d3 = temp;
        }

        if (d1 > d4)
        {
            temp = d1;
            d1 = d4;
            d4 = temp;
        }

        if (d2 > d3)
        {
            temp = d2;
            d2 = d3;
            d3 = temp;
        }

        if (d2 > d4)
        {
            temp = d2;
            d2 = d4;
            d4 = temp;
        }

        if (d3 > d4)
        {
            temp = d3;
            d3 = d4;
            d4 = temp;
        }

        asc = d1 * 1000 + d2 * 100 + d3 * 10 + d4 * 1;
        desc = d4 * 1000 + d3 * 100 + d2 * 10 + d1 * 1;

        num = desc - asc;
        step++;

        printf("Step %d: %d - %d = %d\n", step, desc, asc, num);
    }
    printf("Reached kapkekar's constant in %d steps.\n",step);

    printf("1. Try another number\n");
    printf("2. Show total steps taken\n");
    printf("3. Exit\n");

    printf("\nenter choice:");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("Try printing another number.\n");
            break;

        case 2:
            printf("Total steps taken: %d\n", step);
            break;

        case 3:
            printf("Exited!\n");
            break;

        default:
            printf("invalid\n");

    }
    
    return 0;
}