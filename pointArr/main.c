#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, a[6], *p;

    p=a; // ************INITIALIZATION

    for(i=0; i<6; i++)
    {
        printf("Enter the Number: ");
        scanf("%d", &a[i]);
    }

    printf("\nElement\t\tAddress\n");
    while(p<&a[6])
    {
        printf("%d\t\t%p",*p, p);
        printf("\n");
        p++;
    }

    return 0;
}
