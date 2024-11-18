#include<iostream>
using namespace std;
void insertion_sort(int arr[],int n){
     for(int i=0;i<n;i++){
          int j=i;
         while(j>0  && arr[j-1]>arr[j]){
           swap(arr[j-1],arr[j]);
           j--;
         }
     }
     for(int i=0;i<n;i++){
          cout<<arr[i]<<" ";
     }
}
int main(){
     int arr[6]={6,5,4,3,2,1};
     insertion_sort(arr,6);
}
