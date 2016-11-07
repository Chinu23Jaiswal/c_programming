#include <stdio.h>
#include <stdlib.h>

void println(void);
int main()
{
    int nsub;

    printf("\t CALCULATE YOUR GRADE: \n");
    printf("How many subjects are there? ");
    scanf("%d",&nsub);

    int i;

    float marks[nsub], tot[nsub];
    char sub[nsub][20];
    float grade[nsub];

    for(i=0; i<nsub; i++)
    {
        printf("Enter Subject:");
        scanf(" %s", &sub[i]);
        printf("Enter Marks:");
        scanf("%f", &marks[i]);
        printf("Enter Total Marks:");
        scanf(" %f", &tot[i]);
        printf("\n");
    }

    println();
    printf("\n Subject \t Marks \t Grade \n");

    for(i=0; i<nsub; i++)
    {
       grade[i]= (marks[i]/tot[i])*10;
       printf("\n %s \t %.2f \t %.2f \n", sub[i], marks[i], grade[i]);
    }
    println();

    return 0;
}

  void println(void)
{
    int i;
    for(i=0; i<=50; i++)
    {
        printf("-");
    }
}
