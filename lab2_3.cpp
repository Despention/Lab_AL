#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

struct Node {
    int val;
    Node* next;
    Node(int val) : val(val), next(nullptr) {}
};

struct LinkedList {
private:
    Node* head;

public:
    LinkedList() : head(nullptr) {}

    void addAtHead(int val) {
        Node* newNode = new Node(val);
        (*newNode).next = head;
        head = newNode;
    }

    void printList() {
        Node* current = head;
        while (current != nullptr) {
            cout << (*current).val << " ";
            current = (*current).next;
        }
        cout << endl;
    }

    void reverse() {
        Node* prev = nullptr;
        Node* current = head;
        Node* next = nullptr;

        while (current != nullptr) {
            next = (*current).next;
            (*current).next = prev;
            prev = current;
            current = next;
        }

        head = prev;
    }

private:
    void xReverse(Node* current) {
        if (current == nullptr) {
            return;
        }
        xReverse((*current).next);
        cout << (*current).val << " ";
    }

public:
    void printReverse() {
        cout << "Обратный лист:\n";
        xReverse(head);
        cout << endl;
    }
};

int main() {
    setlocale(LC_ALL,"Rus");

    srand(time(0));

    LinkedList list;

    for (int i = 0; i < 10; i++) {
        int randomValue = rand() % 100;
        list.addAtHead(randomValue);
    }

    cout << "Изначальный лист:\n";
    list.printList();

    list.reverse();

    cout << "Перевернутый лист:\n";
    list.printList();

    cout << "2x Перевернутый лист:\n";
    list.printReverse();
}
