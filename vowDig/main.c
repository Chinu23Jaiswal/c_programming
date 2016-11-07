#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[20];
    int dig=0, vow=0, i=0;

    printf("\t VOWELS AND DIGITS\n");
    printf("Enter a String:");
    gets(s);

    while(s[i]!='\0')
    {
        switch(s[i])
        {
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
        dig++;
        break;
    case 'a':
        case 'A':
    case 'e':
        case 'E':
    case 'i':
        case 'I':
    case 'o':
        case 'O':
    case 'u':
        case 'U':
        vow++;
        break;
        }
        i++;
    }

    printf("\nDigits\tVowels\n");
    printf("%d\t%d", dig, vow);

    return 0;
}
