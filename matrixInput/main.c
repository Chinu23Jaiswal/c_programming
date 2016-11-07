#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, mat[3][3];
    printf("\t Matrix Input\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("Enter the Value:");
            scanf(" %d", &mat[i][j]);
        }
    }

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf(" %d", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
