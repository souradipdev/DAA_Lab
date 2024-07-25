#include<stdio.h>

void sort(int arr[], int n, int startIndex, int endIndex, int decide) {
  int temp;
  if (decide == 0 && startIndex < endIndex) {
    for (int i = startIndex; i <= endIndex; i++) {
      for (int j = startIndex; j <= endIndex - 1 - i; j++) {
        if (arr[j] > arr[j + 1]) {
          temp = arr[j];
          arr[j] = arr[j + 1];
          arr[j + 1] = temp;
        }
      }
    }
  } else if (decide == 1 && startIndex < endIndex) {
    for (int i = 0; i < endIndex; i++) {
      for (int j = startIndex; j <= endIndex - 1 - i; j++) {
        if (arr[j] < arr[j + 1]) {
          temp = arr[j];
          arr[j] = arr[j + 1];
          arr[j + 1] = temp;
        }
      }
    }
  }

  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
}

int main() {
  int n, startIndex, endIndex;
  printf("Enter no of elements: ");
  scanf(" %d", &n);
  int arr[n];

  printf("Enter elements of array: \n");
  for (int i = 0; i < n; i++) {
    scanf(" %d", &arr[i]);
  }

  printf("Enter start index and end index: ");
  scanf(" %d %d", &startIndex, &endIndex);
  sort(arr, n, startIndex, endIndex, 1);
  return 0;
}