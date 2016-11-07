#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n=24;
   int *j;
   int k;
   j=&n;
   k=*j;
   printf("The Number is %d and its location is %p without using Pointer Variable.\n\n", n, &n);
   printf("The Number is %d and its location is %p without using Pointer Variable.\n\n", *&n, &n);
   printf("The Number is %d and its location is %p using Pointer Variable.\n\n", *j, j);
   printf("Address of Pointer Variable of 24 is %p\n\n", &j);
   printf("Value: %d\n\n", k);

    return 0;
}
