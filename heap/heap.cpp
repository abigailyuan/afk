#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#define SIZE 100
#define INIT 10
int arr[SIZE];

int main() {
    int newvar = INIT;
    int len;
    cin >> len;
    int i = 0;
    for(i = 0; i < len; i++){
        cin >> arr[i];
    }
    vector<int> v(arr, arr + SIZE);
    make_heap(v.begin(), v.end());//make heap

    pop_heap(v.begin(), v.end());
    v.pop_back();//pop the last element

    v.push_back(newvar);
    push_heap(v.begin(), v.end());//push newvar

    sort_heap(v.begin(), v.end());//sort

    return 0;
}
