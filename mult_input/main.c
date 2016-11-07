#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, n1, n2;
    n2=0;
    printf("\t PROGRAM TO ADDITION\n");
    printf("How many Integers you want to Add? ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        printf("Enter Number: ");
        scanf("%d", &n1);
        n2=n1+n2;
        printf("%d \n", n2);
    }
    printf("\n\t FINAL RESULT: %d \n", n2);
    return 0;
}
