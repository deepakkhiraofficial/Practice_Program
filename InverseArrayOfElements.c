#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n],newArr[n];
    for(int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("The inverse array is:\n");
    for(int i = n-1; i >= 0; i--) { // i = 5-1 = 4, i >= 0, i--
                                    // newArr[5-1-4] = arr[4]
                                    //... newArr[0] = arr[4]
                                    // ... newArr[1] = arr[3]
                                    // ... newArr[2] = arr[2]
        newArr[n-1-i] = arr[i];
    }
    for(int i = 0; i < n; i++){
        printf("%d ", newArr[i]); 

    }
    return 0;
}
