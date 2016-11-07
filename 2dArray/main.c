#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i;
    char name[10][10];
    for(i=0; i<3; i++)
    {
      printf("Enter the list of names: ");
      scanf(" %s", &name[i]);
    }
    for(i=0; i<3; i++)
    {
      printf("\n %s", name[i]);
    }
}
