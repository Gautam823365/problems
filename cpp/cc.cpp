#include<iostream>
using namespace std;
# define ll long long
int main()
{
  //dance qus by codechef
     int  t;
    cin>> t;
    for(int i =1;i<=t;i++){
        int n;
        cin>>n;
int x,y;
   cin>>x>>y;
   
  if(x==y){
      cout<<0<<endl;
  }else{
      if(x<y){
          int diff=y-x;
          if(diff%2==0){
              cout<<diff/2<<endl;
          }else{
              cout<<(diff/2)+2<<endl;
          }
      }else{
          int diff=x-y;
          cout<<diff<<endl;
      }
  }
  
  
   
    
    }
    return 0;
}