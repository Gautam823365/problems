#include<iostream>
using namespace std;

struct Node {
    Node* head;
    int data;
     struct Node* next;
     Node(int data)
    {
        this->data = data;
        next = NULL;
    }
   
};
struct LinkedList {
    Node* head;
    LinkedList() { head = NULL; }
 void resverse(){
    Node*cur =head;
    Node* prev=NULL;
    while(cur){
        Node*temp=cur->next;
        cur->next=prev;
        prev= cur;

    }
    head=prev;
   cout<< head;
}

 void print()
    {
        struct Node* tem = head;
        while (tem != NULL) {
            cout << tem->data << " ";
            tem = tem->next;
        }
    }
     void push(int data)
    {
        Node* temp = new Node(data);
        temp->next = head;
        head = temp;
    }
};
int main(){
   LinkedList ll;
    ll.push(20);
    ll.push(4);
    ll.push(15);
    ll.push(85);
    ll.resverse();
     cout << "\nReversed Linked list \n";
    ll.print();
}