#include<iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void insertattail(Node *&tail, int d)
{
    // new node create
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;

}
void insertathead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    // head->prev=temp;
    head = temp;
}
int print(Node *&head)
{

    // int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {

        // count++;
        cout << temp->data << " ";
        temp = temp->next;


    }
        cout << endl;

}

void insertatposition(Node *&tail,Node *&head, int position, int d)
{
    // insert at head
    if (position == 1)
    {
        insertathead(head, d);
        return;
    }

    Node *temp = head;
    int count = 1;

    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }

    // insert at last position
    if (temp->next == NULL)
    {
        insertattail(tail, d);
        return;
    }

    // creating a node for d
    Node *nodetoinsert = new Node(d);
    nodetoinsert->next = temp->next;
    temp->next = nodetoinsert;
}
void deletionnode(int position,Node *&head){
    
}
int main()
{
    // created a new node
    Node *node1 = new Node(10);
    // cout<<node1-> data<<endl;
    // cout<< node1 -> next<<endl;

    // head pointed to  node 1
    Node *head = node1;
    Node *tail = node1;
    print(head);
    // cout << endl;

    insertattail(tail, 12);
    print(tail);
    // cout << endl;
    // insertattail(tail,15);
    // print(head);
    insertathead(head, 15);
    print(head);
    // cout << endl;
    // int sum = 0;
    insertatposition(tail,head, 2, 22);
    print(head);
    // insertatposition(head, 2, 22);
    // print(head, sum);
    cout<<"head"<<head->data<<endl;
    cout<<"tail"<<tail->data<<endl;

    return 0;
}