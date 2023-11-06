#include <iostream>
using namespace std;

int main() {
    struct node {
        int data;
        struct node* next;
    };

    struct node* head = nullptr;
    struct node* newnode;
    struct node* temp = nullptr;
    int choice = 1; // Initialize choice to 1 to enter the loop
    int count = 0;

    while (choice) {
        newnode = new struct node;
        cout << "Enter data: ";
        cin >> newnode->data;
        newnode->next = nullptr;

        if (head == nullptr) {
            head = temp = newnode;
        } else {
            temp->next = newnode;
            temp = newnode;
        }

        cout << "Do you want to continue (0, 1)? ";
        cin >> choice;
    }

    temp = head;
    cout << "Linked List elements: ";
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
        count++;
    }

    cout << "\nTotal elements in the linked list: " << count << endl;

    // Free memory for the nodes
    temp = head;
    while (temp != nullptr) {
        struct node* toDelete = temp;
        temp = temp->next;
        delete toDelete;
    }

    return 0;
}
