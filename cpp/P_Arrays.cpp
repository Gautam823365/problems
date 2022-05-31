#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>> n;
   
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int maxno=INT_MIN;
    for(int i=0;i<n;i++){
         maxno=max(maxno,a[i]);
    
        }
    cout<< maxno <<endl;
   return 0;


}