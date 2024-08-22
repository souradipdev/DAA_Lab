#include <iostream>

using namespace std;

int main() {

  int n = 15;
//  cin >> n;
  int arr[] = {10, 40, 35, 47, 68, 22, 40, 10, 98, 10, 50, 35, 68, 40, 10,};

  int hash[1000000];
  for (int i = 0; i < n; i++) {
//    cin >> arr[i];
    hash[arr[i]] += 1;
  }

  int q = n - 1, elem, countOccurrence = 0;
  while (q--) {
    if (hash[arr[q]] > countOccurrence) {
      elem = arr[q];
      countOccurrence = hash[arr[q]];
    }
    cout << arr[q] << " -> " << hash[arr[q]] << endl;
  }

  cout << "Elem with max occurrence: " << elem << endl;
}