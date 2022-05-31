#include<iostream>
// #include<math.h>
using namespace std;
int fact(int n){
    int factorial=1;
    for(int i=2;i<=n;i++){
        factorial*=i;

    }
    return factorial;
}
int main(){
    int n;
    cin>>n;
    /*
    int sum=0;
    int ori =n;
    while (n>0)
    {
         int lastdigit= n%10;
        sum+= pow(lastdigit,3);
        n=n/10;
    }

        if(sum==ori){
        cout<<"Armstrong number"<<endl;

        }
        else{
        cout<<"Not armstrong number"<<endl;
        }
   
   */

  for(int i=0;i<n;i++){
      for(int j=0;j<=i;j++){
        cout<<fact(i)/(fact(j)* fact(i-j))<<" ";    // pascal factorial
      }
      cout<<endl;
      
    }

return 0;
}