#include <stdio.h>

int main()
 {
    int num, reversed = 0, remainder, original;
    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    if (original == reversed)
        printf("is a Pal", original);
    else
        printf(" is not a Pal", original);

    return 0;
}

