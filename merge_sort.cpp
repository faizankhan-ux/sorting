#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int> &arr,int s,int mid,int n){
     vector<int> temp;
     int left=s;
     int right=mid+1;
     while(left<=mid && right<=n){
          if(arr[left] < arr[right]){
               temp.push_back(arr[left]);
               left++;
          }else{
               temp.push_back(arr[right]);
               right++;
          }

     }
     //if there are still elements left in left array
     while(left<=mid){
          temp.push_back(arr[left]);
          left++;
     }
     //if there are still elements left in right array
      while(right<=n){
          temp.push_back(arr[right]);
          right++;
     }
     for(int i=s;i<=n;i++){
          arr[i]=temp[i-s];
     }
}

void MergeSort(vector<int> &arr,int s,int n){
     //when we get 1 element array thenn return
  if(s>=n)return ;
  int mid=(s+n)/2;

  //recursion
  MergeSort(arr,s,mid);
  MergeSort(arr,mid+1,n);
  merge(arr,s,mid,n);

}

int main(){
     vector<int> arr={8,7,6,5,4,3,2,1};
     int n=arr.size();
     MergeSort(arr,0,n-1);

     for(auto it:arr){
          cout<<it<<" ";
     }
}
