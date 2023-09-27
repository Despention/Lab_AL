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
    Node* head;
    LinkedList() : head(nullptr) {}

    void addAtHead(int val) {
        Node* newNode = new Node(val); 
        newNode->next = head; 
        head = newNode; 
    }

    void printList() {
        Node *current = head;
    while(current!=nullptr){
        cout<<current->val<<"|";
        current=current->next;
    }
        cout << endl;
    }
};

int main() {
    setlocale(LC_ALL,"Rus");

    srand(time(0));

    LinkedList list;

    for(int i = 0; i < 10; i++) {
        int randomValue = rand() % 100;
        list.addAtHead(randomValue);
    }

    cout<<"Создание LinkedList:\n";

    list.addAtHead(57);
    list.addAtHead(49);
    list.addAtHead(65);
    list.printList(); 
    return 0;
}
