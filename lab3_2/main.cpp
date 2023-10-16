#include "Stack.h"
#include <iostream>
using namespace std;

int main() {
    Stack stack;  

    stack.push(1);
    stack.push(2);
    stack.push(3);

    cout << "Top of the stack: " << stack.top() << endl;
    cout << "Stack contents: ";
    Stack tempStack = stack;  
    while (!tempStack.isEmpty()) {
        cout << tempStack.top() << " ";
        tempStack.pop();
    }
    cout << endl;

    stack.pop();
    cout << "Popped the top element." << endl;

    cout << "Is the stack empty? " << (stack.isEmpty() ? "Yes" : "No") << endl;

    return 0;
}
