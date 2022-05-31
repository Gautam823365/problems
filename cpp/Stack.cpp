#include<iostream>
#include<stack>
using namespace std;

/*
void reverseString( string s){
    stack<string> st;
    for(int i=0;i<s.length();i++){
        string word="";
        while(s[i]!=' '&& i<s.length()){
            word+=s[i];                       ------> reverse sentence
            i++;
        }
        st.push(word);
    }
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    
    }
    cout<<endl;
}
int main(){
    string s="Hello, My name is Gautam kumar";
    reverseString(s);
}
*/
void insertAtbottom(stack<int> &st,int ele){
    if(st.empty()){
        st.push(ele);
        return;
    }

    int topele= st.top();
    st.pop();
    insertAtbottom(st,ele);

    st.push(topele);
}


void reverse (stack <int> &st){
    if(st.empty()){
        return;
    }
    int  ele=st.top();
    st.pop();
    reverse(st);
    insertAtbottom(st,ele);
}
int main(){

 stack<int> st;
 st.push(1);
 st.push(2);
 st.push(3);
 st.push(4);
 reverse(st);
 while (!st.empty()){
     cout<<st.top()<<" ";
     st.pop();
 }
 cout<<endl;
 
}