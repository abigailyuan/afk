// Merge Sort
//Way to use:
//Merge_sort(1,num); where 'num' is len(a).

#include <iostream>
using namespace std;

int a[50];//global
void merge(int,int,int);
void merge_sort(int low,int high)
{
  int mid;
  if(low<high){

    mid = low + (high-low)/2; //This avoids overflow when low, high are too large
    merge_sort(low,mid);
    merge_sort(mid+1,high);
    merge(low,mid,high);
  }
}
void merge(int low,int mid,int high){

  int h,i,j,b[50],k;
  h=low;
  i=low;
  j=mid+1;
  while((h<=mid)&&(j<=high)){

    if(a[h]<=a[j]){

      b[i]=a[h];
      h++;
    }else{

      b[i]=a[j];
      j++;
    }
    i++;
  }
  if(h>mid){

    for(k=j;k<=high;k++){

      b[i]=a[k];
      i++;
    }
  }else{

    for(k=h;k<=mid;k++){

      b[i]=a[k];
      i++;
    }
  }
  for(k=low;k<=high;k++) a[k]=b[k];
}
