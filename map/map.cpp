#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    Map<int, string> a;
    //insert
    a.insert(pair<int, string>(1, "abc"));
    a.insert(map<int,string>::value_type(2, "bcd"));
    a[3] = "cde";

    //size
    int asize = a.size();

    //iteration
    map<int,string>::iterator it;
    for(it = a.begin();it!=a.end();it++){
        cout<<it->first<<"      "<<it->second<<endl;
    }

    //reverse iteration
    map<int,string>::reverse_iterator it;
    for(it = a.rbegin();it!=a.rend();it++){
        cout<<it->first<<"      "<<it->second<<endl;
    }

    //iteration in a normal way
    int asize = a.size();
    for(int i = 1;i<= asize;i++){
        cout<<a[i]<<endl;
    }

    //search
    Map<int,string> mapStudent;
    mapStudent.insert(pair<int,string>(1, "student_one"));
    mapStudent.insert(pair<int,string>(2, "student_two"));
    mapStudent.insert(pair<int,string>(3, "student_three"));
    map<int,string>::iterator iter;
    iter = mapStudent.find(1);//find() function returns the location of the argument if found
                              //otherwise it returns a.end();
    if(iter!=mapStudent.end()){
        cout<<"Find, the value is "<<iter->second<<endl;
    }else{
        cout<<"Do not find"<<endl;
    }

    //clear map
    a.clear();
    bool if_empty = a.empty();//true if a is empty

    //delete items
    iter = mapStudent.find(1);
    mapStudent.erase(iter);
    //or
    int n = mapStudent.erase(1);//return 1 if deleted otherwise 1
    //or delete the whole map
    mapStudent.erase(mapStudent.begin(),mapStudent.end());//including begin, excluding end

    return 0;
}
