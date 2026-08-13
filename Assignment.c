/* Determine Type of Character:
Given a character input, determine if it is:
•⁠  ⁠An uppercase letter
•⁠  ⁠A lowercase letter
•⁠  ⁠A digit
•⁠  ⁠A whitespace
•⁠  ⁠A special character
*/

#include<stdio.h>
int main() {

    char c;

    printf("enter a character :");
    scanf("%c" , &c);

    if (c >= 'A' && c <= 'Z')
    {
        printf("An uppercase letter\n");

    }
    else if (c >= 'a' && c <= 'z')
    {
        printf("A lowercase letter\n");
    }
    else if (c >= '0' && c <= '9')
    {
        printf("A digit\n");
    }
    else if (c == ' ')
    {
        printf("A whitespace\n");
    }
    else
    {
        printf("A special character\n");
    }
    
    return 0;
}