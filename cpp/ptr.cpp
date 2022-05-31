#include<iostream>
using namespace std;
void swap(int *a,int *b){
    int temp= *a;
    *a=*b;
    *b=temp;
}
int main()
{
    int a=2;
   // int *aptr=&a;
    int b=6;
    int* bptr=&b;
    //swap(*aptr,*bptr);
    swap(&a,&b);
    cout<< a<<" "<< b<< endl;
    return 0;
}