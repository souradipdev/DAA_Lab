#include <iostream>
using namespace std;

int main() {

  int n;
  cin >> n;
  int arr[n];

  for(int i = 0; i < n ; i++){
    cin >> arr[i];
  }

  int hash[1000000];

  for(int i = 0; i < n; i++){
    hash[arr[i]] +=1;
  }

  int q = n -1;
  while(true){
    cout << "Occurrence of " << arr[q] << " is: " << hash[arr[q]] << endl;
    if(q-- == 0){
      break;
    }
  }
}