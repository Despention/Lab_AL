cpp
#ifndef STACK_H
#define STACK_H

#include "ListNode.h"

template <typename T>
class Stack {
private:
    ListNode<T>* topNode;

public:
    Stack();
    ~Stack();

    bool isEmpty() const;

    void push(T item);
    T pop();
    T top() const;
};

#endif