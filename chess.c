// Universal Chess Move Validator

#include<stdio.h>
int main() {

    char piece_type, piece_color;
    int x1, x2, y1, y2, iscapture; 
    int dx, dy;
    
    printf("enter piece_type, piece_color (in capslock): ");
    scanf(" %c %c", &piece_type,&piece_color);

    printf("enter x1, y1, x2, y2, iscapture: ");
    scanf("%d %d %d %d %d", &x1,&y1,&x2,&y2,&iscapture);

    // Checking whether coordinates are valid or not
    if ( x1 < 1 || x1 > 8 || y1 < 1 || y1 > 8 || x2 < 1 || x2 > 8 || y2 < 1 || y2 > 8 )
    {
        printf("Invalid coordinates\n");
        return 0;
    }

    // Checking movement
    if ( x1 == x2 && y1 == y2 )
    {
        printf("Invalid move\n");
        return 0;
    }

    // Change in x and y
    dx = x2 - x1;
    dy = y2 - y1;

    // King
    if (piece_type == 'K')
   {
        if (x1 == x2 || y1 == y2)
            printf("Valid move\n");
        else 
            printf("Invalid move\n");
   }

   // Bishop
   else if ( piece_type == 'B')
   {
        if (dx == dy || dx == - dy)
            printf("Valid move\n");
        else 
            printf("Invalid move\n");
   }

   // Queen
   else if ( piece_type == 'Q')
   {
        if (x1 == x2 || y1 == y2 || dx == dy || dx == -dy)
            printf("Valid move\n");
        else 
            printf("Invalid move\n");
   }

   // Knight
   else if ( piece_type == 'N')
   {
        if (((dx == 1 || dx == -1) && (dy == 2 || dy == -2)) || ((dx == 2 || dx == -2) && (dy == 1 || dy == -1)))
            printf("Valid move\n");
        else 
            printf("Invalid move\n");
   }

   // Pawn
   else if ( piece_type == 'P')
   {
        // White Pawn
        if (piece_color == 'W')
        {
            if ( iscapture == 0 ) 
            {
                // Normal move
                if (x1 == x2 && y2 == y1 + 1)
                    printf("Valid move\n");

                // First move only
                else if (x1 == x2 && y1 == 2 && y2 == y1 + 2)
                    printf("Valid move\n");

                else 
                    printf("Invalid move\n");
            }

            else 
            {
                // Capture diagonally
                if ((dx == 1 || dx == -1) && (y2 == y1 + 1))
                    printf("Valid move\n");
                else 
                    printf("Invalid move\n");
            }
        }

        // Black Pawn
        else if (piece_color == 'B') 
        {
            if ( iscapture == 0)
            {
                // Normal move
                if (x1 == x2 && y2 == y1 - 1)
                    printf("Valid move\n");
                
                // First move only
                else if (x1 == x2 && y1 == 7 && y2 == y1 - 2)
                    printf("Valid move\n");

                else 
                    printf("Invalid move\n");
            }

            else 
            {
                // Capture diagonally
                if ((dx == 1 || dx == -1) && (y2 == y1 - 1))
                    printf("Valid move\n");

                else 
                    printf("Invalid move\n");
            }
        }

        else 
            printf("Invalid move\n");

   }
   
    return 0;
}