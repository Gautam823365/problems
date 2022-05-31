#include<iostream>
using namespace std;
int main(){
    int n;
    cin>> n;
   
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    /*
        int counter=1;
        while (counter<n)
        {
            for (int i = 0; i < n- counter; i++)
            {
                if (a[i]>a[i+1])         //-----> buble sort
                {
                  int temp=a[i];
                  a[i]=a[i+1];
                  a[i+1]=temp;

                }
                
            }
            
        }
        
    /*
    
    for(int i=0;i<n-1;i++){
        for (int j= i+1; j <n; j++)
        {
            if(a[j]<a[i]){
                                        //----> Selection sort
               int temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
            
        }
        
    }
    */
   for (int  i = 1; i < n; i++)
   {
       int count=a[i];
       int j=i-1;
       while ( a[j]>count&& j>=0)
       {
         a[j+1]=a[j];
         j--;
       }
       a[j+1]=count;
   }
   
    for(int i=0;i<n;i++){
        cout<<a[i]<<" "<<endl;
    }
    return 0;
}