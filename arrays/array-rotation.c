#include <stdio.h>

void array_rotation(int *arr, int n) {
    int i = 0;
    int tmp = arr[0];
    for (i = 0; i < n - 1; i++) {
        arr[i] = arr[i+1];
    }
    arr[n-1] = tmp;
}

void print_array(int *arr, int n) {
    int i = 0;
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    int arr[5] = {1,2,3,4,5};
    int rotate;
    printf ("Initial Array : ");
    print_array(arr, 5);
    printf ("How many times do you wish to rotate the array : ");
    scanf ("%d", &rotate);
    array_rotation(arr, 5);
    printf ("Rotated Array : ");
    print_array(arr, 5);
    return 0;
}