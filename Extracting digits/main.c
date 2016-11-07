#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, n1, i;
    printf("Print 5 digit number:  ");
    scanf("%d",&n);

    printf("\n");
    for(i=1; i<=5; i++)
    {
        n1 = n%10;
        printf("%d \t", n1);
        n=n/10;             // REVERSE NUMBER
    }
    printf("\n");
    return 0;
}
