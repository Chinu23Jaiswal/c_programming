#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;
    rst:
    for(i=0; i<=5; i++)
    {

        for(j=0; j<=i; j++)
        {
            printf("#");
        }
        printf("*\n");
        delay(100);
    }
    system("cls");
    goto rst;
    return 0;
}

void delay(int m)
{
    int i=0,  j=0;
    m = m*13;
    for(i=0; i<=32700; i++)
    {
        for(j=0; j<=m; j++)
        {

        }
    }
}
