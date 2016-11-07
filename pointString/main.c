#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *a="Hello World";
    puts(a);
    int size = strlen(a);
    printf("%d\n", size);

    char newString[10];
    printf("Give New String Input: ");
    //scanf("%s", newString);
    gets(newString);         // Both can be used at different times.....
    printf("New String is : ");
    puts(newString);

    return 0;
}
