#include<iostream>
using namespace std;

void merge(int *arr,int s,int e){
    int mid =(s+e)/2;

    int len1=mid -s+1;
    int len2=e-mid;

    int*first=new int[len1];
    int *second=new int [len2];
    //copy value
    int mn_idx=s;
    for(int i=0;i<len1;i++){
        first[i]=arr[mn_idx++];
    }
     mn_idx=mid+1;
     for(int i=0;i<len2;i++){
        second[i]=arr[mn_idx++];
    }
    //merge 2 sorted arrray
    int idx1=0;
    int idx2=0;
    mn_idx=s;
    while(idx1<len1&& idx2<len2){
        if(first[idx1]<second[idx2]){
            arr[mn_idx++]=first[idx1++];
        }else{
            arr[mn_idx++]=second[idx2++];
        }
    }
    while(idx1<len1){
         arr[mn_idx++]=first[idx1++];
    }
    while(idx2<len2){
        arr[mn_idx++]=second[idx2++]; 
    }
        delete[]first;
        delete[]second;
 }
void mergesort(int *arr,int s,int e){
   if(s>=e){
       return ;
   }
   
    int mid=(s+e)/2;
   mergesort(arr,s,mid);
   mergesort(arr,mid+1,e);
   merge(arr,s,e);
}

int main(){
    int arr[10]={6,4,2,4,2,56,65,63,3,8};
    int n=10;
  mergesort(arr,0,n-1);
  for(int i=0;i<10;i++){
      cout<<arr[i]<<" ";
 }
}