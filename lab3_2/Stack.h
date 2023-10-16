#ifndef STACK_H
#define STACK_H

#include "ListNode.h"

class Stack {
private:
    ListNode<int>* topNode;

public:
    Stack();
    ~Stack();

    bool isEmpty() const;

    void push(int item);
    int pop();
    int top() const;
};

#endif
