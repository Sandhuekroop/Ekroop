
#include<iostream>
#include<string>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

// Stack class
class Stack {
    private:
        Node* top;
    public:
        Stack() : top(NULL) {}

        // Check if the stack is empty
        bool isEmpty() {
            return top == NULL;
        }

        // Push a value onto the stack
        void push(int value) {
            Node* newNode = new Node;
            newNode->data = value;
            newNode->next = top;
            top = newNode;
        }

        // Pop a value off the stack
        int pop() {
            if(isEmpty()) {
                throw "Stack is empty";
            }
            int value = top->data;
            Node* temp = top;
            top = top->next;
            delete temp;
            return value;
        }

        // Peek the top value of the stack
        int peek() {
            if(isEmpty()) {
                throw "Stack is empty";
            }
            return top->data;
        }
};

// Function to evaluate a postfix expression
int evaluatePostfix(string expression) {
    Stack stack;
    for(int i = 0; i < expression.length(); i++) {
        if(isdigit(expression[i])) {
            stack.push(expression[i] - '0');
        } else {
            int operand1 = stack.pop();
            int operand2 = stack.pop();
            switch(expression[i]) {
                case '+': stack.push(operand2 + operand1); break;
                case '-': stack.push(operand2 - operand1); break;
                case '*': stack.push(operand2 * operand1); break;
                case '/': stack.push(operand2 / operand1); break;
            }
        }
    }
    return stack.pop();
}

int main() {
    string expression = "231*+9-";
    cout << "Value of expression " << expression << " is " << evaluatePostfix(expression);
    return 0;
}