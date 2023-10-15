cpp
#include "Stack.h"

template <typename T>
Stack<T>::Stack() {
    topNode = nullptr;
}

template <typename T>
Stack<T>::~Stack() {
    while (!isEmpty()) {
        pop();
    }
}

template <typename T>
bool Stack<T>::isEmpty() const {
    return topNode == nullptr;
}

template <typename T>
void Stack<T>::push(T item) {
    ListNode<T>* newNode = new ListNode<T>(item);
    newNode->next = topNode;
    topNode = newNode;
}

template <typename T>
T Stack<T>::pop() {
    if (isEmpty()) {
        throw std::out_of_range("Stack is empty");
    }

    ListNode<T>* temp = topNode;
    T item = temp->data;
    topNode = topNode->next;
    delete temp;

    return item;
}

template <typename T>
T Stack<T>::top() const {
    if (isEmpty()) {
        throw std::out_of_range("Stack is empty");
    }

    return topNode->data;
}