#include<iostream>
using namespace std;

int main()

{
     int t;
   cin>>t;
   int a,b,p,q;
   for(int i=0 ;i<=t;i++){
    cin>>a>>b>>p>>q;
    if(p%a==0 && q%b==0){
        int x=p/a;
        int y=q/b;
        if((x-y)==1 || (y-x)==1||(x-y)==0||(y-x)==0){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }else{
        cout<<"No"<<endl;
    }
   }
}