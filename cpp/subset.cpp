#include<iostream>
using namespace std;
void subset(int a[],int n){
 for(int i=0;i<(1<<n);i++){  //---> length = 2^n-1
     for (int  j = 0; j < n; j++)
     {
      if(i&(i<<j)){
          cout<<a[j]<< " ";
      }
     }
     cout<< endl;
     
 }
}

int main()
{
    
    int a[4]={1,2,3,4};
    subset(a,4);
    
    return 0;
}