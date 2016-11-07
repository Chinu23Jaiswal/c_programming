#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n, i, j,l;
    char t[20];
    printf("\tSORTING STRINGS");
    printf("\nEnter the number of Strings: ");
    scanf("%d", &n);

    char str[n][20];

    for(i=0; i<n; i++)
    {
        printf("Enter the String:");
        scanf("%s", &str[i]);
    }

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if((strcmp(str[i],str[j]))>0)
            {
                strcpy(t,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],t);
            }
        }
    }

    for(i=0; i<n; i++)
    {
        printf("\n %s", str[i]);
    }

    return 0;
}
