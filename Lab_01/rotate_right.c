#include <stdio.h>

void swapArrayElements(int arr[], int temp, int i)
{
    temp = arr[i];
    arr[i] = arr[i - 1];
    arr[i - 1] = temp;
}

void rotateRight(int arr[], int q)
{
    int temp;
    for (int i = q - 1; i > 0; i--)
    {
        swapArrayElements(arr, temp, i);
    }
}

int main()
{
    int n, q;
    printf("Enter no of elements: ");
    scanf(" %d", &n);
    int arr[n];

    printf("Enter elements of array: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter no of elements to be shifted: ");
    scanf(" %d", &q);

    rotateRight(arr, q);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}