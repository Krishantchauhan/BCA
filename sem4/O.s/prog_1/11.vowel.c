#include <stdio.h>

void main()
{
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);

    ch = tolower(ch);

    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        printf("'%c' is Vowel.", ch);
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        printf("'%c' is Consonant.", ch);
    }
    else
    {
        printf("'%c' is not an alphabet.", ch);
    }

}
