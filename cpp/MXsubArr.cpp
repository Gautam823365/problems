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
    int maxsum=INT_MIN;
   // bool flag =0;
    
    for (int  i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
           int sum =0;
           for(int k=i;k<=j;k++){
               //cout << a[k];
                sum+=a[k];
                //  if(sum== 0){
                //     flag= 1;
                
                // }
                
           }

           cout<<endl;
           maxsum=max(maxsum,sum);
         
        }
        
        
    }
    // cout<<flag<<endl;
     //cout<<maxsum<<endl;
    return 0;
    
}
