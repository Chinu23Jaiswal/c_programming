#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, j, l;
    char *p;

    printf("Enter number of items:");
    scanf("%d",&n);

    char a[n][20];

    for(i=0; i<n; i++)
    {
        printf("Enter a String or Number:");
        scanf("%s",&a[i]);
    }
     p=a;
    for(i=0; i<n; i++)
    {
        l=strlen(a[i]);
        for(j=0; j<l; j++)
        {
            printf("%c", *(p+20*i+j)) ;
        }
        printf("\n");
    }
    return 0;
}
