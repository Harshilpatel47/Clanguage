#include <stdio.h>

int len(char *str)
{
    int l = 0;
    while (*str != '\0')
    {
        l++;
        str++;
    }

    return l;
}

int main()
{
    char str[100];

    printf("Enter any string: ");
    fgets(str, sizeof(str), stdin);

    int length = len(str);

    printf("The length of the string is: %d \n", length);

    return 0;
}
