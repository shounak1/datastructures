#include <stdio.h>

void left_rotation(int *arr, int size_of_array, int num_of_rotations)
{
    int i = 0, j = 0;

    for (j = 0; j < num_of_rotations; j++)
    {
        int tmp = arr[0];
        for (i = 0; i < size_of_array - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        arr[size_of_array - 1] = tmp;
    }
}

void right_rotation(int *arr, int size_of_array, int num_of_rotations)
{
    int i = 0, j = 0;

    for (j = 0; j < num_of_rotations; j++)
    {
        int tmp = arr[size_of_array - 1];
        for (i = size_of_array - 1; i >= 0; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[0] = tmp;
    }
}

void left_rotation_by_gcd(int *arr, int size_of_array, int num_of_rotations)
{
    int counter;
    int gcd = 0;
    if (size_of_array > num_of_rotations)
    {
        counter = num_of_rotations;
    }
    else if (size_of_array > num_of_rotations)
    {
        counter = size_of_array;
    }
    else
    {
        gcd = size_of_array;
    }

    int i = 0;

    if (gcd == 0)
    {
        for (i = counter; i > 0; i--)
        {
            if (size_of_array % i == 0 && num_of_rotations % i == 0)
            {
                gcd = i;
                break;
            }
        }
    }

    printf ("Gcd is : %d", gcd);
}

void print_array(int *arr, int size_of_array)
{
    int i = 0;
    for (i = 0; i < size_of_array; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int arr1[] = {1, 2, 3, 4, 5, 6};
    int arr2[] = {1, 2, 3, 4, 5, 6};

    int rotate;
    int size_of_array = (int)sizeof(arr1) / sizeof(arr1[0]);
    printf("Initial Array : ");
    print_array(arr1, size_of_array);
    printf("How many times do you wish to rotate the array : ");
    scanf("%d", &rotate);
    left_rotation(arr1, size_of_array, rotate);
    right_rotation(arr2, size_of_array, rotate);
    printf("\nLeft Rotated Array : ");
    print_array(arr1, size_of_array);
    printf("\nRight Rotated Array : ");
    print_array(arr2, size_of_array);

    left_rotation_by_gcd(arr1, size_of_array, rotate);
    return 0;
}