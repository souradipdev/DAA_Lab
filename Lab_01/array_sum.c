#include <stdio.h>

int main()
{
    int n;
    printf("Enter no of elements: ");
    scanf(" %d ", &n);
    int arr[n], counterArr[n];

    printf("Enter elements of array: \n");
    for (int i = 0; i < n; i++)
    {
        scanf(" %d", &arr[i]);
    }

    int prefixSum[n], sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
        prefixSum[i] = sum;
    }

    printf("Prefix of prefixSum array: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", prefixSum[i]);
    }

    return 0;
}