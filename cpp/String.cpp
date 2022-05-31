#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
 string str= " ubbskbk";

 for(int i=0;i<str.size();i++){
     if(str[i]>='b'&& str[i]<='u'){
            str[i]-=32;
     }
 }
        cout<<str<<endl;
  transform(str.begin(),str.end(),str.begin(),::tolower );
    cout<<str<<endl;
     
        string s="3994793";
        sort(s.begin(),s.end(),greater<int>());
        cout<<s<<endl;
 /*
    string s="bkbkfbksbfgyefckf";
    int freq[26];
    for(int i=0;i<26;i++){
        freq[i]=0;
    }
    for(int i=0;i<s.size();i++){
        freq[s[i]-'a']++;
    }
    int maxR=0;
    char ans='a';
    for(int i=0;i<26;i++){
        if(maxR<freq[i]){
            maxR=freq[i];
            ans= i+'a';
        }
    }
    cout<<maxR<<" "<<ans<< endl;*/

    return 0;
  
}
