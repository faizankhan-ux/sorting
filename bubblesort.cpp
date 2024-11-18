#include <iostream>
using namespace std;
void bubble_sort(int arr[],int n){
   for(int i=0;i<n-1;i++){
     for(int j=0;j<n-1;j++){
          if(arr[j]>arr[j+1]){
               swap(arr[j],arr[j+1]);
          }
     }
   }
     for(int i=0;i<n;i++){
          cout<<arr[i]<<" ";
     }
}
int main(){
     int arr[6]={6,5,4,3,2,1};
     bubble_sort(arr,6);
}
