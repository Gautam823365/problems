#include<iostream>
using namespace std;
int  fibo(int n){
    if(n==0)return 0;
    if(n==1)return 1;
    int res=fibo(n-1)+fibo(n-2);
    return res;
}
int main(){
    int n=4;
    //fibo(n);
    cout<<fibo(n)<<" "<< endl;
    
}
