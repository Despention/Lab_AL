#include "FixedCapacityStack.h"
#include <stdexcept>

FixedCapacityStack::FixedCapacityStack(int capacity) {
    this->capacity = capacity;
    this->a = new int[capacity];
    this->n = 0;
}

FixedCapacityStack::~FixedCapacityStack() {
    delete[] a;
}

bool FixedCapacityStack::isEmpty() const {
    return n == 0;
}

bool FixedCapacityStack::isFull() const {
    return n == capacity;
}

void FixedCapacityStack::push(int item) {
    if (!isFull()) {
        a[n++] = item;
    }
}

int FixedCapacityStack::pop() {
    if (!isEmpty()) {
        return a[--n];
    }
    throw std::out_of_range("Stack is empty");
}

int FixedCapacityStack::top() const {
    if (!isEmpty()) {
        return a[n - 1];
    }
    throw std::out_of_range("Stack is empty");
}
