#include <stdio.h>
#include <string.h>

int main()
{
    char str[1001];
    int i, j, len;
    int is_palindrome = 1;

    scanf("%s", str);

    len = strlen(str);

    for (i = 0, j = len - 1; i < len / 2; i++, j--)
    {
        if (str[i] != str[j])
        {
            is_palindrome = 0;
            break;
        }
    }

    if (is_palindrome)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}