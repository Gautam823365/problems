# include<iostream>
using namespace std;

int fact(long n){
if(n==0){
    return 1;
}
int np=fact(n-1);
    return n*np;
 }
int main(){
    int t ;
    cin >>t;
    while (t--)
    {
       int n;
       cin>>n;
       cout<<fact(n)<<endl;
       
      
    }
    
}