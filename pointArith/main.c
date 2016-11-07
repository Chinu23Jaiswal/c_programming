#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, a, s, m, d, *i, *j;
    i=&x;
    j=&y;
    printf("Enter the value of A:");
    scanf("%d", &*i);
    printf("Enter the value of B:");
    scanf("%d", &*j);
    a= *i + *j;
    s= *i - *j;
    m= *i * *j;
    d= *i / *j;
    printf("\nAdd: %d\nSub: %d\nMul: %d\nDiv: %d\n",a ,s, m, d);
    return 0;
}
