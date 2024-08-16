#include<iostream>

using namespace std;
int j = 0, k = 0;

void sort(int arr[], int n) {
  int even[100], odd[100];
  int sortArr[n];
  int i = 0;
  for (i = 0; i < n; i++) {
    if (arr[i] % 2 == 0) {
      even[j++] = arr[i];
    } else {
      odd[k++] = arr[i];
    }
  }
  int m = k;
  i = 0, j = n - 1, k = 0;
  while (i < m && j >= 0) {
    if (odd[i] < even[j]) {
      sortArr[k] = odd[j];
      i++;
    } else {
      sortArr[k] = even[j];
      j--;
    }
    k++;
  }
  while(i < m){
    sortArr[k] = odd[i];
    i++;
    k++;
  }

  while(j >= 0){
    sortArr[k] = even[j];
    j--;
    k++;
  }


  for(int elem: sortArr){
    cout << elem << " ";
  }

}

int main() {
  int n = 8;
  int arr[8] = {11, 41, 45, 33, 57, 25, 63, 12};

  sort(arr, n);
}