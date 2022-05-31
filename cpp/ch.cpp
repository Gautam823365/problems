#include<iostream>
#include<cmath>
using namespace std;
// int reversDigits(int num)
// {
//     int rev_num = 0;
//     while (num > 0)          //--->reverseDigit
//     {
//         rev_num = rev_num*10 + num%10;
//         num = num/10;
//     }
//     return rev_num;
// }

int main()
{
   int t;
   cin>>t;
  while(t--){
int n, count=0;
cin>>n;
for(int i=0;i<n;i++){
    int temp;
    cin>>temp;          //----> Weird Palindrome Making 
    if(temp%2!=0) count++;
 
}
if(count%2!=0)count--;
cout<<count/2<<endl;

  }

}
