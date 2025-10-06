#include <stdio.h>

int main() {
    int arr[6] = {10, 20, 30, 40, 50,12};
    int size = sizeof(arr) / sizeof(arr[0]) - 1; // Current number of elements
    //printf("Current array elements:%d \n",size);

    printf("Enter index (0-%d) and value: ", size);
    int index, val;
    scanf("%d %d", &index, &val);

    if(index < 0 || index > size) {
        printf("Index out of bounds!\n");
        return 0;
    }

    for(int i = size; i > index; i--) {
        arr[i] = arr[i - 1];
    }
    arr[index] = val;
    //size++;

    printf("Array after insertion:\n");
    for(int i = 0; i <= size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
