
#include<bits/stdc++.h>
using namespace std;
//Koii output nhi aa rha hai
void ssort(int arr[],int size,int idx){
   if(idx == size)
            return;

        int smallestIdx = idx; // take curr idx element as smallest

        for(int i = idx + 1; i < size; i++){
            if(arr[smallestIdx] > arr[i]) // found another smallest element than arr[smallestIdx]
                smallestIdx = i; // update the smallestIdx val
        }

        //place smallest element found at idx
        int temp = arr[idx];
        arr[idx] = arr[smallestIdx];
        arr[smallestIdx] = temp;

        // one part Done recursion will do other work;
        ssort(arr ,   size,idx + 1);
}
    


int main(){
    int arr[5]={6,4,2,3,8};
    int n =5;
    
  ssort(arr,n,0);
  for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
 }
}