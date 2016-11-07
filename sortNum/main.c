#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, n, temp;

    printf("\t SORTING NUMBERS\n");
    printf("How many Numbers are their in your list? ");
    scanf("%d", &n);

    int num[n];

    for(i=0; i<n; i++)
    {
        printf("Enter Number:");
        scanf("%d", &num[i]);
    }

    printf("\n\t ASCENDING\n");
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
           if(num[i]>num[j])
           {
               temp=num[j];
               num[j]=num[i];
               num[i]=temp;
           }
        }
    }

    for(i=0; i<n; i++)
    {
        printf("%d", num[i]);
        printf("\t");
    }

    printf("\n\n\t DESCENDING\n");
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
           if(num[i]<num[j])
           {
               temp=num[j];
               num[j]=num[i];
               num[i]=temp;
           }
        }
    }

    for(i=0; i<n; i++)
    {
        printf("%d", num[i]);
        printf("\t");
    }
     printf("\n");

    return 0;
}
