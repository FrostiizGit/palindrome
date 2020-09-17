#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void is_palindrome(char *a_str, char *b_str)
{
    int is_palindrome = strcmp(a_str, b_str);
    if (!is_palindrome)
    {
        printf("This is a palindrome.\n");
    }
    else
    {
        printf("This is NOT a palindrome.\n");
    }
}

char* reverse_string(char *str)
{
    char *r_str = malloc(strlen(str));
    strcpy(r_str, str);
    char tmp_letter;
    int i = 0;
    int j = strlen(str) - 1;

    while (i < j)
    {
        tmp_letter = r_str[i];
        r_str[i] = r_str[j];
        r_str[j] = tmp_letter;
        i++;
        j--;
    }

    return r_str;
}

void is_palindrome_loop(char *str)
{
    int i = 0;
    int len = strlen(str);
    for (i; i < len - 1; i++)
    {
        if (str[i] != str[len - 1 - i])
        {
            printf("This is NOT a palindrome.\n");
            return;
        }
    }
    printf("This is a palindrome.\n");
}

void main()
{
    char str[1000];
    printf("Enter a string: ");
    // scanf will wait until atleast 1 char is entered
    scanf("%s", &str);
    printf("You entered: %s \n", str);
    char *r_str = reverse_string(str);
    printf("Reversed input: %s \n", r_str);
    is_palindrome(str, r_str);
    free(r_str);
    is_palindrome_loop(str);
}