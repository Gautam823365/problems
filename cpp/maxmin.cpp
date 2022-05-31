#include<iostream>
#include<climits>
using namespace std;
int main(){
    
    int  n;
    cin>> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int maxno=INT_MIN;
    int minno= INT_MAX;

   
     
    for( int i=0;i<n;i++){
         minno=min(minno,a[i]);
         maxno= max(maxno,a[i]);
        }

    cout<<maxno<<" "<<minno <<endl;
    return 0;

}