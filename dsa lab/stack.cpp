
#include<iostream>
#include<string>
using namespace std;

// Function to check if the given character is an operator
bool isOperator(char c) {
    if(c == '+' || c == '-' || c == '*' || c == '/')
        return true;
    return false;
}

// Function to return the precedence of the operators
int precedence(char op) {
    if(op == '+' || op == '-')
        return 1;
    if(op == '*' || op == '/')
        return 2;
    return 0;
}

// Function to convert infix expression to postfix expression
string infixToPostfix(string infix) {
    int length = infix.length();
    string postfix = "";
    int top = -1;

    // Stack to store the operators
    char stack[length];

    for(int i = 0; i < length; i++) {
        // If the character is an operand, add it to the postfix expression
        if(!isOperator(infix[i]))
            postfix += infix[i];

        // If the character is an operator
        else {
            // While the stack is not empty and the top operator has higher precedence than the current operator
            while(top >= 0 && precedence(stack[top]) >= precedence(infix[i])) {
                // Pop the operator from the stack and append it to the postfix expression
                postfix += stack[top--];
            }
            // Push the current operator onto the stack
            stack[++top] = infix[i];
        }
    }

    // While the stack is not empty, pop the operator from the stack and append it to the postfix expression
    while(top >= 0)
        postfix += stack[top--];

    return postfix;
}

int main() {
    string infix = "a+b*(c-d)";
    cout << "Infix expression: " << infix << endl;
    cout << "Postfix expression: " << infixToPostfix(infix) << endl;
    return 0;
}