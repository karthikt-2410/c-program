#include <stdio.h>
#include <string.h>

int main(void)
//1.Write a C program to find the length of a string using strlen() without using loops for counting manually.
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove trailing newline if present
    str[strcspn(str, "\n")] = '\0';

    printf("Length of the string is: %zu\n", strlen(str));

    return 0;
}
//2.Write a program to copy one string into another using strcpy() and display both strings.
{
    char str[100], str1[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    strcpy(str1, str);

    printf("Original string: %s\n", str);
    printf("Copied string: %s\n", str1);

    return 0;
}
//3.Write a program to compare two strings using strcmp() and print whether they are equal, greater, or smaller.
{
    char str1[100], str2[100];
    int result;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    result = strcmp(str1, str2);

    if (result == 0)
        printf("The strings are equal.\n");
    else if (result < 0)
        printf("String 1 is smaller than String 2.\n");
    else
        printf("String 1 is greater than String 2.\n");

    return 0;
}
//4.Write a program that accepts an integer and prints its square root using the sqrt() function.
{
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Square root is not defined for negative numbers.\n");
    }
    else
    {
        printf("Square root of %d is %.2f\n", num, sqrt(num));
    }

    return 0;
}

//5.A company stores employee names in different formats (uppercase/lowercase). Write a program using predefined string functions to:
void toUpperCase(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        str[i] = toupper((unsigned char)str[i]);
        i++;
    }
}

int main(void)
{
    char name1[50], name2[50];

    printf("Enter first employee name: ");
    fgets(name1, sizeof(name1), stdin);
    name1[strcspn(name1, "\n")] = '\0';

    printf("Enter second employee name: ");
    fgets(name2, sizeof(name2), stdin);
    name2[strcspn(name2, "\n")] = '\0';

    toUpperCase(name1);
    toUpperCase(name2);

    if (strcmp(name1, name2) == 0)
        printf("The employee names are the same (ignoring case).\n");
    else
        printf("The employee names are different.\n");

    printf("Name 1 in uppercase: %s\n", name1);
    printf("Name 2 in uppercase: %s\n", name2);

    return 0;
}
