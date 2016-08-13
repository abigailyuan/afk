#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#define SIZE 10
int arr[SIZE];

void selectionSort(int n);

int main() {
    int i;

    for (i = 0; i < SIZE; i++) {    // input
        arr[i] = rand() % 20;
    }

    selectionSort(SIZE);    // sort

    for (i = 0; i < SIZE; i++) {    // output
        cout << arr[i] << endl;
    }

    return 0;
}

void selectionSort(int n) {
      int i, j, minIndex, tmp;
      for (i = 0; i < n - 1; i++) {
            minIndex = i;
            for (j = i + 1; j < n; j++)
                  if (arr[j] < arr[minIndex])
                        minIndex = j;
            if (minIndex != i) {
                  tmp = arr[i];
                  arr[i] = arr[minIndex];
                  arr[minIndex] = tmp;
            }
      }
}
