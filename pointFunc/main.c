#include <stdio.h>
#include <stdlib.h>
void swap(int *x, int *y);
int *great(int *e, int *f);

void main()
{
   int a;
   printf("Press\n1 for Functions Returning Pointers\n2 for Functions Not Returning Pointers: ");
   scanf("%d", &a);

   if(a==1)
   {

       //****************FUNCTIONS RETURNING POINTERS******************
       int c, d, *p;
       printf("\n\tGREATEST OF TWO\n");
       printf("Enter a Number:");
       scanf("%d", &c);
       printf("Enter a Number:");
       scanf("%d", &d);

       p = great(&c, &d);  //***********CALL BY REFERENCE

       printf("\nGreatest of Two is: %d", *p);
       printf("\n");

   }

   else if(a==2)
   {

       //*****************FUNCTIONS USING POINTERS**********************
       int i, j;
       printf("\n\tSWAPPING\n");
       printf("Enter a Number:");
       scanf("%d", &i);
       printf("Enter a Number:");
       scanf("%d", &j);

       swap(&i, &j); //***************CALL

       printf("\nSwapped: %d, %d", i, j);
       printf("\n");

   }

    return 0;
}

void swap(int *x, int *y)
{
    int t;
    t=*y;
    *y=*x;
    *x=t;

}

int *great(int *e, int *f)
{
    int *g;
    if(*e>*f)
    {
        *g=*e;
    }

    else
    {
        *g=*f;
    }

    return(g);
}
