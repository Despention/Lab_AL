#include "Stack.h"
#include <stdexcept>

Stack::Stack() {
    topNode = nullptr;
}

Stack::~Stack() {
    while (!isEmpty()) {
        pop();
    }
}

bool Stack::isEmpty() const {
    return topNode == nullptr;
}

void Stack::push(int item) {
    ListNode<int>* newNode = new ListNode<int>(item);
    newNode->next = topNode;
    topNode = newNode;
}

int Stack::pop() {
    if (isEmpty()) {
        throw std::out_of_range("Stack is empty");
    }

    ListNode<int>* temp = topNode;
    int item = temp->data;
    topNode = topNode->next;
    delete temp;

    return item;
}

int Stack::top() const {
    if (isEmpty()) {
        throw std::out_of_range("Stack is empty");
    }

    return topNode->data;
}
