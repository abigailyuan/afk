#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


void quickSort(vector<int> &arr, int left, int right);

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    const int SIZE = 10;
    vector<int> arr(SIZE);

    for (int i = 0; i < SIZE; i++) {    // input
        arr[i] = rand() % 20;
    }

    quickSort(arr, 0, SIZE - 1);    // sort

    for (int i = 0; i < SIZE; i++) {    // output
        cout << arr[i] << endl;
    }

    return 0;
}

void quickSort(vector<int> &arr, int left, int right) {
      int i = left, j = right;
      int tmp;
      int pivot = arr[(left + right) / 2];

      /* partition */
      while (i <= j) {
            while (arr[i] < pivot)
                  i++;
            while (arr[j] > pivot)
                  j--;
            if (i <= j) {
                  tmp = arr[i];
                  arr[i] = arr[j];
                  arr[j] = tmp;
                  i++;
                  j--;
            }
      };

      /* recursion */
      if (left < j)
            quickSort(arr, left, j);
      if (i < right)
            quickSort(arr, i, right);
}
