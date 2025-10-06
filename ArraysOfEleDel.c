# include <stdio.h>
int main() {
    int arr[6] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Current array elements:\n");
    for(int i = 0; i < size-1; i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");


    printf("Enter index (0-%d) to delete: ", size - 1);
    int index;
    scanf("%d", &index);

    if(index < 0 || index > size) {
        printf("Index out of bounds!\n");
        return 0;
    }

    for(int i = index; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    printf("Array after deletion:\n");
    for(int i = 0; i < size-2; i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");

    return 0;
}