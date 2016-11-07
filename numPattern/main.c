#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c , i , k, j;
    repeat:
    c=1;
    for(i=0; i<=19; i++)
    {
        for(k=15; k>i; k--)
        {
            printf(" ");
        }

        for(j=0; j<i; j++)
        {
            printf("%d", c);
            printf(" ");
            c++;
        }

        printf("\n");
        delay(50);
    }
    delay(2000);
    system("cls");
    goto repeat;
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
