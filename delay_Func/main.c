#include <stdio.h>
#include <stdlib.h>

int main()
{
    void delay(int m);
    int i;
    hello:
    for(i=0; i<=10; i++)
    {
        printf("\t\t Hello Ritik!!\n");
        delay(100); // Approx Delay of  100ms.
    }
    for(i=0; i<=10; i++)
    {
        printf("\t\t Hello Choti!\n");
        delay(100); // Approx Delay of  100ms.
    }
    system("cls"); // For Clearing Screen in __DOS
    goto hello;
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
