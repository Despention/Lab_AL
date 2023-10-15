#ifndef FIXEDCAPACITYSTACK_H
#define FIXEDCAPACITYSTACK_H

#include <iostream> // Добавим заголовок для std::ostream

class FixedCapacityStack {
private:
    int *a;  
    int n;  
    int capacity;  

public:
    FixedCapacityStack(int capacity);
    ~FixedCapacityStack();
    bool isEmpty() const;
    bool isFull() const;
    void push(int item);
    int pop();
    int top() const;

    friend std::ostream& operator<<(std::ostream& os, const FixedCapacityStack& stack);
};

#endif
