#ifndef LISTNODE_H
#define LISTNODE_H

template <typename T>
struct ListNode {
    T data;
    ListNode<T>* next;

    ListNode(T value) : data(value), next(nullptr) {}
};

#endif