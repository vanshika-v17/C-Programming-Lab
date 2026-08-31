/*

Print:
        1 
      1 2 
    1 2 3 4
  1 2 3 4 5 6
1 2 3 4 5 6 7 8

*/

#include<stdio.h>
int main() {
    int i, j, k ;

    for (i = 1; i <= 5; i++) 
    {
        // Print leading spaces
        for (j = 1; j <= 5 - i; j++)
        {
            printf("  ");
        }

        // Print numbers
        if (i == 1)
        {
            printf("1");
        }
        else 
        {
            for (k = 1; k <= 2 * i - 2; k++)
            {
                printf("%d ", k);
            }
        }
        printf("\n");
    }

    return 0;
}