#include<iostream>
using namespace std;
/*void primesieveNo(int n){
     int a[100]={0};
   
    for(int i=2;i<n;i++){
        if(a[i]==0){
            for(int j=i*i;j<n;j+=i){
                a[j]=1;
            }
        }
    }
    for(int i=2;i<=n;i++){
            if(a[i]==0){
                cout<<i<<" "<<endl;
            }
    }
    cout<<endl;
}
*/
void primeFactor(int n){
    int spf[100]={0};
    for (int i = 2; i <=n; i++)
    {
       spf[i]=i;
    }
    for(int i=2;i<=n;i++){
        if(spf[i]==i){
            for(int j=i*i;j<=n;j+=i){
                if(spf[j]==j){
                    spf[j]=i;
                }
            }
        }
    }
    while (n!=1)
    {
       cout<<spf[n]<<" ";
      n= n/spf[n];
    }
    
    
}
int main()
{
   int n;
   cin>>n;
//    primesieveNo(n);
    primeFactor(n);
   return 0;

}