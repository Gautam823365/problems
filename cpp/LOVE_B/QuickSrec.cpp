#include<iostream>
using namespace std;
int partion(int arr[],int s,int e){
        int pivot=arr[s];
        int cnt=0;
        for(int i=s+1;i<=e;i++){
            if(arr[i]<=pivot){
                cnt++;
            }
        }
        int pvtidx=s+cnt;
        swap(arr[pvtidx],arr[s]);
        //left or right wala part shambhal lete hai
        int i=s,j=e;
        while(i<pvtidx&& j>pvtidx){
            while(arr[i]<pivot){
                i++;
            }
            while(arr[j]>pivot){
                j--;
            }
            if(i< pvtidx && j>pvtidx){
                swap(arr[i++],arr[j--]);
            }
        }
        return pvtidx;
} 

void quickSort(int arr[],int s,int e){
     if(s>=e)return ;
     int p=partion(arr,s,e);
     //left part ke liye 
     quickSort(arr,s,p-1);
     //right part ke liye
     quickSort(arr,p+1,e);
}
int main(){
int arr[10]={6,4,2,4,2,56,65,63,3,8};
    int n=10;
  quickSort(arr,0,n-1);
  for(int i=0;i<10;i++){
      cout<<arr[i]<<" ";
}
}