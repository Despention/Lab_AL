#include "FixedCapacityStack.h"
#include <iostream>
using namespace std;

int main() {
    FixedCapacityStack stack(5); 

    stack.push(1);
    stack.push(2);
    stack.push(3);

    cout << "Top of the stack: " << stack.top() << endl;

    stack.pop();
    cout << "Popped the top element." << endl;

    cout << "Is the stack empty? " << (stack.isEmpty() ? "Yes" : "No") << endl;

    return 0;
}

