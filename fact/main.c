#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fact(int);
    int n, i, n2;

    printf("Enter a number:");
    scanf("%d", &n);
    n2=n;
    for(i=0; i<=n; i++)
    {
       n2=n2*(n-1);
       n--;
    }
    printf("Factorial: %d", n2);

    int x;
    x=fact(5);
    printf("\nFactorial using Recursion: %d", x);
    return 0;
}

int fact(int i)
{
    int f;
    f=i*(fact(i-1));
    return(f);
}
