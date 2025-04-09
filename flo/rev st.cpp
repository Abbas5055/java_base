#include <stdio.h>
#include <string.h>
int main() 
{
    char str[100], rev[100];
    printf("Enter a string: ");
    scanf("%s", str);

    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        rev[i] = str[len - i - 1];
    }
    rev[len] = '\0';
    printf("Reversed String: %s\n", rev);

    return 0;
}

