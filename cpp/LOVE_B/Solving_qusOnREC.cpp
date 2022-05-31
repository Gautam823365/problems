#include<iostream>
using namespace std;
/*
BINARY SEARCH USING RECURSION 

bool arrswaping (int arr[],int n){
    
if(n==0)return 1 ;
if(n==1)return 1;
if(arr[0]>arr[1]){
    return 0;
}
else{
    

 bool ans=arrswaping(arr+1,n-1);
 return ans;
 }
 
}
   # SUM OF NUMBER IN ARRAY USING RECURSION
int sumOFarray(int arr[], int m){
   int sum=0; 
    if(m==0)return 0;
   // if(n==1)return arr[n];
    sum+=arr[0];
  int ans= sum+ sumOFarray(arr+1,m-1);
    
   
    return ans;
}   


bool CheckNUM(int arr[],int m,int key){
    if(m==0)return 0;
    if(arr[0]==key){
        return 1;
    }else{
    bool ans =CheckNUM(arr+1,m-1,key);
    return ans;
    }
}

*/


bool Bsearch(int arr[],int s,int e,int k){
    //base case
        
        if(s>e ){
            return false;
        }

        int mid=s+(e-s)/2;
        if(arr[mid]==k){
                return true;
            }
       
        if(arr[mid]<k){
            return Bsearch(arr,mid+1,e,k);
        }else{
            return  Bsearch(arr,s,mid-1,k);
        }
        return -1;
}

int main(){
    int m=5;
    int k =35;
    int arr[5]={2,4,5,7,45};
       //cout<<arrswaping(arr,n);
      cout<< Bsearch(arr,0,4,k);
}