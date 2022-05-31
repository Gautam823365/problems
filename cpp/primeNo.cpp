#include<iostream>
#include<cmath>
using namespace std;

int main(){
    /*
int a,b;
cin>>a>>b;
for(int num=a;num<=b;num++){
    int i;
    for(int i=2;i<num;i++){
        if(num%i==0){
            break;
        }
       
    }
    if(i==num){
        cout<<num<<endl;
    }

}

int n;
cin>>n;
bool flag=0;
for(int i=2;i<sqrt(n);i++){
    if(n%2==0){
        cout<<"Non prime";
        flag=1;
         break ;
    }
    if(flag==0){
        cout<<"Prime number";
    }
}
*/
int n;
cin>>n;
for (int i=n;i>=1;i--){
    cout<<i;
}

return 0;

}

