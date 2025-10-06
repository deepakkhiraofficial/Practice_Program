#include <stdio.h>

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("Natural numbers from 1 to %d are: ", n);
    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    return 0;
}