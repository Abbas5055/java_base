#include <stdio.h>
int main() 
{
    int n, arr[100], key, found = 0;
    printf("Enter the number of elements ");
    scanf("%d", &n);

    printf("Enter %d elements", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search ");
    scanf("%d", &key);

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Element found at index ", i);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Element not found");
    return 0;
}

