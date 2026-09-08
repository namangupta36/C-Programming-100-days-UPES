#include <stdio.h>
int main ()
{
    char piece, color;
    int x1, y1, x2, y2, isCapture;
    scanf("%c %c", &piece, &color);
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    scanf("%d", &isCapture);
    /* Check coordinates */
    if (x1 < 1 || x1 > 8 || y1 < 1 || y1 > 8 || x2 < 1 || x2 > 8 || y2 < 1 || y2 > 8)
    {
        printf("Invalid coordinates");
        return 0;
    }
    /* Same position */
    if ( x1 == x2 && y1 == y2)
    {
    printf("Invalid move");
    return 0;
    }
    /* KING */
    if (piece == 'K')
    {
        if ((x2 == x1 || x2 == x1 + 1 || x2 == x1 - 1) && (y2 == y1 || y2 == y1 + 1 || y2 == y1 - 1))
        printf("Valid move");
        else
        printf("Invalid move");
    }
    /* ROOK */
    else if (piece == 'R')
    {
        if (x1 == x2 || y1 == y2)
        printf("Valid move");
        else
        printf("Invalid move");
    }
    /* BISHOP */
    else if (piece == 'B')
    {
        if ((x2 - x1 == y2 - y1) || (x2 - x1 == y1 - y2))
        printf("Valid move");
        else
        printf("Invalid move");
    }
    /* QUEEN */
    else if (piece == 'Q')
    {
        if (x1 == x2 || y1 == y2 || (x2 - x1 == y2 - y1) || (x2 - x1 == y1 - y2))
        printf("Valid move");
        else
        printf("Invalid move");
    }
    /* KNIGHT */
    else if (piece == 'N')
    {
        if ((x2 == x1 + 2 || x2 == x1 - 2) && (y2 == y1 + 1 || y2 == y1 - 1))
        printf("Valid move");
        else if ((x2 == x1 + 1 || x2 == x1 - 1) && (y2 == y1 + 2 || y2 == y1 - 2))
        printf("Valid move");
        else
        printf("Invalid move");
    }
    /* PAWN */
    else if (piece == 'P')
    {
        if (color == 'W')
        {
            /* Normal move */
            if (isCapture == 0 && x2 == x1 && y2 == y1 + 1)
            printf("Valid move");
            /* First move : 2 squares */
            else if (isCapture == 0 && x2 == x1 && y1 == 2 && y2 == 4)
            printf("Valid move");
            /* Capture */
            else if (isCapture == 1 && (x2 == x1 + 1 || x2 == x1 - 1) && y2 == y1 + 1)
            printf("Valid move");
            else
            printf("Invalid move");
        }
        else if (color == 'B')
        {
            /* Normal move */
            if (isCapture == 0 && x2 == x1 && y2 == y1 - 1)
            printf("Valid move");
            /* First move: 2 squares */
            else if (isCapture == 0 && x2 == x1 && y1 == 7 && y2 == 5)
            printf("Valid move");
            /* Capture */
            else if (isCapture == 1 && (x2 == x1 + 1 || x2 == x1 - 1) && y2 == y1 - 1)
            printf("Valid move");
            else
            printf("Invalid move");
        }
    }
    else
    {
        printf("Invalid move");
    }
    return 0;
}