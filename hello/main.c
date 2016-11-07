#include <stdio.h>
#include <stdlib.h>

int main()
{
    char e;
    printf("Hello world!\a");
    printf("\nHello guys\n\n");
    printf("Press E for Exit ");
    e = getchar();
    if(e == 'E' || e== 'e')
    {
        exit(0);
    }
    return 0;
}

