#include<iostream>
using namespace std;
int power(int a,int b){
if(b==0)
return  1;
if( b==1)return a;
int ans=power(a,b/2); 

// if b is even
if(b%2==0){
    return ans*ans;
}else{
    return a*ans*ans;
}
}


 int main(){
int a=5,b=3;
//cin >>a>>b;
cout<<endl;
cout<<power(a,b)<<endl;
 }