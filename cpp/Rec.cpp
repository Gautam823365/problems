#include<iostream>
using namespace std;

/*

 int power(int n, int p){
    if(n==0){
        return 1;
    }
    int prevp = power(n,p-1);
    return n * prevp;
 }*/
 int fact(long n){
if(n==0){
    return 1;
}
int np=fact(n-1);
    return n*np;
 }
int main()
{
// int n,p;
// cin>>n>>p;
//cout<<power(n,p)<<endl;
int n;
cin>>n;
cout<<fact(n)<<endl;
return 0;
}