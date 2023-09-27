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
        Node* current = head;
        while (current != nullptr) {
            cout << current->val << " ";
            current = current->next;
        }
        cout << endl;
    }

    void reverse() {
        Node* prev = nullptr;
        Node* current = head;
        Node* next = nullptr;
        
        while (current != nullptr) {
            next = current->next; 
            current->next = prev; 
            prev = current; 
            current = next; 
        }
        
        head = prev; 
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
    
    cout << "Изначальный лист:\n ";
    list.printList(); 
    
    list.reverse(); 
    
    cout << "Перевернутый лист:\n ";
    list.printList(); 
}
