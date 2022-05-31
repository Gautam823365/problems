#include<iostream>
using namespace std;
int main(){
   /* int row,col;
    cin>>row>>col;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            if(i==1||i==row||j==1||j==col){   //----> playing with *
             
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;*/
    int n;
    cin>>n;
    /*for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        int space= 2*n-2*i;
        for (int j = 1; j <=space; j++)     /------> playing with *
        {
            cout<<" ";
        }
         for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;

        
    }
     for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        int space= 2*n-2*i;
        for (int j = 1; j<=space; j++)     //butterfly pattern
        {
            cout<<" ";
        }
         for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;}
        



        for(int i=1;i<=n;i++){
            for (int j=1;j<= n+1-i;j++){       //----> inverted pattern
                cout<<j<<" ";
            }
            cout <<endl;
        }
        
       for (int i=1;i<=n;i++){
           for(int j=1;j<=i;j++){
               if((i+j)%2==0){
                   cout<<" 1";                 //------> 0-1 pattern
                
               }else{
                   cout<<" 0";
               }
           }
           cout<<endl;
       }
       


      for(int i=1;i<=n;i++){
          int j;
          for( j=1;j<=n-i;j++){
              cout<<"  ";
            
            }
          int k=i;
          for(;j<=n;j++){                       // ------> palindrom
              cout<<k--<<" ";                   ////  for star 2*i-1
                                           

            }
          k=2;
          for(;j<=n+i-1;j++){               // for zig zag
                cout<<k++<<" ";             //(i+j)%4==0|| i==2&& j%4==0 else cout<<" ";
            }
          cout<<endl;
        }*/

        
    
    return 0;
}