#include<iostream>
using namespace std;
 void printString(string S,int start,int end){
      for(int i=start;i<=end;i++){
          cout<<S[i];
      }
  }
   void  longestPalin (string S) {
       //even
       int l,h;
       int start=0,end=1;
       for(int i=1;i<S.length();i++){
           l=i-1;
           h=i;
       while(l>=0&&h<S.length()&& S[l]==S[h])
       {
          if(h-l+1>end){
              start=l;
              end=h-l+1;
          }l--;
          h++;
        
       }
       //odd
       l=i-1;
       h=i+1;
       while(l>=0&& h<S.length()&& S[l]==S[h])
       {
          if(h-l+1>end){
              start=l;
              end=h-l+1;
          
          }l--;
          h++;
       
       }
       }
       printString(S,start,start+end-1);
    }

int main(){
    int t=1;
    //cin>>t;
    while(t--){
        string S="aaaabbaab";
       // cin>>S;
        longestPalin(S);
        cout<<endl;
    }

}