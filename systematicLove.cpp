#include <iostream>
#include <math.h>

const int x = 19;
const int y = 16;

int main()
{
    std::string message = " SYSTEMATIC LOVE ";
    // print top part
    for (int i = x / 2; i <= x; i += 2)
    {
        /* Printing Spaces */
        for (int j = 1; j < x - i; j += 2)
        {
            printf(" ");
        } 
        /* printing stars for left semi circle */
        for (int j = 1; j <= i; j++)
        {
            printf("v");
        }
        /* Printing Spaces */
        for (int j = 1; j <= x - i; j++)
        {
            printf(" ");
        }
        /* printing stars for right semi circle */
        for (int j = 1; j <= i; j++)
        {
            printf("v");
        }
        /* move to next row */
        printf("\n");
    }

    // print middle with message
    int rowRepeater = 0;
    while (rowRepeater <= y / 6)
    {

        // print left side
        for (int i = 0; i < x; i++)
        {
            printf("v");
        }

        // print right side
        for (int i = x; i < x * 2; i++)
        {
            printf("v");
        }
        rowRepeater++;
        /* move to next row */
        printf("\n");
    }

    // print message
    // print left side before message
    for (int i = 0; i <= x / 2; i++)
    {
        printf("v");
    }
    std::cout << message;
    // print right side before message
    for (int i = x / 2; i <= x; i++)
    {
        printf("v");
    }
    /* move to next row */
    printf("\n");

    // print lower part (inverted triangle)
    int remainder_y = (x + 1) / 2;
    for (int i = 1; i <= remainder_y * 2; i++)
    {
        for (int j = 1; j < i; j++)
        {
            printf(" ");
        }
        for (int j = i; j < x; j++)
        {
            printf("v");
        }
        for (int j = i; j <= x; j++)
        {
            printf("v");
        }
        printf("\n");
    }

    return 0;
}
