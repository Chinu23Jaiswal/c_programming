#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, k, mat1[3][3], mat2[3][3], mat3[3][3];
    printf("\t Matrix Input(3X3)\n");


// First Matrix********************************

    printf("First Matrix:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("Value: ");
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


// SECOND Matrix**********************************

    printf("Second Matrix:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("Value: ");
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

// Multiplication*************************************

    printf("\t Multiplication: \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
          mat3[i][j]=0;
          for(k=0; k<3; k++)
          {
            mat3[i][j] = mat3[i][j] + mat1[i][k] * mat2[k][j];
          }
        }
    }

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf(" %d", mat3[i][j]);
        }
        printf("\n");
    }


    return 0;
}
