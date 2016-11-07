#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, i, n=1, n2=-1, n3=0;
    printf("Enter the Range:");
    scanf("%d", &a);
    for(i=1; i<=a; i++)
    {
        n3=n2+n;
        n2=n;
        n=n3;
        printf("%d\t", n3);
    }
    return 0;
}
