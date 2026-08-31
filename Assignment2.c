/*

Print:
X X X X X X
X X X X X
X X X X
X X X 
X X 
X 

*/

#include<stdio.h>
int main() {
    int i, j;

    for (i = 6; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("X");
        }
        printf("\n");
    }
    return 0;
}