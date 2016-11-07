#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, mat1[3][3], mat2[3][3];
    printf("\t Matrix Input(3X3)\n");
    printf("First Matrix:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("Enter the Value:");
            scanf(" %d", &mat1[i][j]);
        }
    }

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf(" %d", mat1[i][j]);
        }
        printf("\n");
    }

    printf("Second Matrix:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("Enter the Value:");
            scanf(" %d", &mat2[i][j]);
        }
    }

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf(" %d", mat2[i][j]);
        }
        printf("\n");
    }

    printf("\t Addition: \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf(" %d", mat1[i][j]+mat2[i][j]);
        }
        printf("\n");
    }

    return 0;
}
