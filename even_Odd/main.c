#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, i;
    printf("Enter a Number:");
    scanf(" %d", &a);
    for(i=1; i<=a; i++)
    {
        if(i%2==0)
        {
            printf("\nEven");
        }

        else
        {
            printf("\nOdd\n");
        }
    }
    return 0;
}
