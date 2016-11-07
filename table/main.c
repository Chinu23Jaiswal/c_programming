#include <stdio.h>
#include <stdlib.h>

int main()
{
    int col;
    int row;

    for(row=1; row<=5; row++)
    {
        for(col=1; col<=5; col++)
        {
          printf("---\t");
        }

        printf("\n");

    }
    return 0;
}
