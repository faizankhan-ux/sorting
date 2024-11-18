#include<iostream>
using namespace std;

void selection_sort(int arr[],int n){
     
     for(int i=0;i<n;i++){
          int min=arr[i];
          for(int j=i;j<n;j++){
               if(min>arr[j]){
                    swap(arr[i],arr[j]);
                    min=arr[j];
               }
          }
     }
     for(int i=0;i<n;i++){
          cout<<arr[i];
     }
}
int main(){
     int arr[6]={6,5,4,3,2,1};
     selection_sort(arr,6);
}
