#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, temp, reverse=0;
    printf("PALINDROME ");
    printf("\nEnter A Number:");
    scanf("%d", &n);
    temp=n;
    while(temp!=0)
    {
        reverse=reverse * 10;
        reverse=reverse + temp%10;
        temp=temp/10;
    }

    if(reverse==n)
    {
        printf("%d is Palindrome.\n", n);
    }
    else
    {
        printf("%d is Not Palindrome.\n", n);
    }

    return 0;
}
