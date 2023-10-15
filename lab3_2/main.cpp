#include "Stack.h"
#include <iostream>

int main() {
    Stack<int> stack;

    stack.push(1);
    stack.push(2);
    stack.push(3);

    std::cout << "Top of the stack: " << stack.top() << std::endl;

    stack.pop();
    std::cout << "Popped the top element." << std::endl;

    std::cout << "Is the stack empty? " << (stack.isEmpty() ? "Yes" : "No") << std::endl;

    return 0;
}