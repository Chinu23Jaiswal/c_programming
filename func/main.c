#include <stdio.h>
#include <stdlib.h>

int main()
{
    int calsum(int a, int b);

    int p, q, s;
    printf("Addition Using Functions\n");
    printf("Enter a Number: ");
    scanf("%d", &p);
    printf("Enter a Number: ");
    scanf("%d", &q);
    s=calsum(p, q);
    printf("Result: %d", s);
    s=calsum(6,2);
    printf("\nResult_2: %d\n", s);
    return 0;
}

int calsum(int a, int b)
{
    int r= a+b;
    return r;
}
