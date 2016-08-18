#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    vector<int> a;//claim a int type vector
    int size = a.size();//此处a的size为0
    vector<MyType> b;//claim a self-defined type vector
    vector<int> a(100, 0);//this vector contains 100 0s.
    a.pop_back();
    a.push_back(1);
    a.back();//return the last element
    a.clear();//clear the vector and make the size be 0
    vector<int> a(100,0);
    cout<<a[5]<<endl;
    cout<<a.at(5)<<endl;

    //iteration
    for(vector<int>::iterator it=a.begin();it!=a.end();it++){
        cout<<*it<<endl;
    }
    //or
    for(int i=0;i<a.size;i++){
        cout<<a[i]<<endl;
    }
    return 0;
}
