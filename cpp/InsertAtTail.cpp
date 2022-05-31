#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){
        data= val;
        next =NULL;
    }
};
void insertFirst(node* &head,int val)
{
    node* n= new node(val);
    
    n->next=head;
    head=n;
}
bool Search(node* head, int key){
node* temp=head;
while (temp!=NULL)
{
    if(temp->data==key){
        return true;
    
    }
    temp=temp->next;
    false;
}

}
node* reversK(node* &head ,int k){
    node*prevptr=NULL;
    node*currptr=head;
    node*nextptr;
    int count=0;
    while(currptr!=NULL && count<k){
        nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
        count++;
    }
    if(nextptr!=NULL){
        head->next=reversK(nextptr,k);
    }
    return prevptr;
}
node* reverse(node* &head){
    if(head==NULL ||head->next==NULL){
        return head;
    }
   node* newhd= reverse(head->next);
    head->next->next=head;
    head->next=NULL;
    return newhd;
}
void insertAtTail(node*  &head,int val){
    node* n = new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp= head;
    while(temp->next!=NULL){
    temp=temp->next;
    }
    temp->next=n;

}
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;

}

void delAthead(node* &head){
    node* del=head;
    head= head->next;
    delete del;

}
void delNode(node* head,int val){
    if(head==NULL){
        return;
    }
    if(head->next==NULL){
        delAthead(head);
        return;
    }
    node* temp= head;
    while(temp->next->data!= val){
        temp=temp->next;

    }
    node* del=temp->next;
    temp->next=temp->next->next;
    delete del;
}

int main()
{
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,4);
    insertAtTail(head,16);
    insertAtTail(head,35);
//     display(head);
//     insertFirst(head,2);
//     display(head);
//    cout<<Search(head,16)<<endl;
//    delNode(head,1);
//    display(head);
//    delAthead(head);
//    display(head);
//   node* web= reverse(head);
//    display(web);
   int k=2;
   node* net=reversK(head,k);
   display(net);
    return 0;
}