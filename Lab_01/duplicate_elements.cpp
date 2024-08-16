#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {

  vector<int> arr = {10, 40, 35, 47, 68, 22, 40, 10, 98, 10, 50, 35, 68, 40, 10};

  cout << "Enter 8 elements: " << endl;

  unordered_map<int, int> frequency;

  for (int num: arr) {
    frequency[num]++;
  }

  int countMax = 0, elem;
  for (auto it: frequency) {

    cout << it.first  <<" -> " << it.second << endl;
    if (it.second > countMax) {
      elem = it.first;
      countMax++;
    }
  }

  cout << "Element with max occurrence: " << elem << endl;
}