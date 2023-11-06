#include<iostream>
using namespace std;
class node{
public:
    int data;
    node  *ptr;
   node(int d){
    this->data=d;
    this->ptr=0;
   }
 node(node* &head, int newdata){
  node* temp=new node(20);
    temp->ptr=head;
    head=temp;
   }
};

   
int main(){
   
    // node obj;
    node *node1=new node(10);
    cout<<node1->data<<endl;
    cout<<node1->ptr;
    node* head=node1;
    node*tail=node1;
    // obj.insertAtHead(*head,data);
     node(head,20);


return 0;
}