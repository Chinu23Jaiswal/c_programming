#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *string;
    string = malloc(sizeof(char));  // string = (char *)malloc(sizeof(char));
    string = "My Name";
    printf("\n New String is : ");
    puts(string);
   // printf("\n Enter New String: ");
   // gets(string);
   // puts(string);

    free(string);

    return 0;
}
