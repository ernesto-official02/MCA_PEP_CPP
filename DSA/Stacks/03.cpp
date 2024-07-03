//doubly linkedlist
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

void insertAtHead(Node* &head, int val) {
    Node* n = new Node(val);
    if (head == NULL) {
        n->next = n;
        n->prev = n;
        head = n;
        return;
    }
    Node* tail = head->prev;

    n->next = head;
    n->prev = tail;
    tail->next = n;
    head->prev = n;
    head = n;
}

void insertAtTail(Node* &head, int val) {
    if (head == NULL) {
        insertAtHead(head, val);
        return;
    }

    Node* tail = head->prev;
    Node* n = new Node(val);
    
    tail->next = n;
    n->prev = tail;
    n->next = head;
    head->prev = n;
}

void deleteNode(Node* &head, int pos) {
    if (head ==NULL ) {
        cout << "List is empty" << endl;
        return;
    }

    Node* temp = head;
    if (pos == 1) {
        Node* tail = head->prev;
        tail->next = head->next;
        head->next->prev = tail;
        head = head->next;
        delete temp;
        return;
    }

    int count = 1;
    while (count != pos && temp->next != head) {
        temp = temp->next;
        count++;
    }

    if (temp->next == head && count != pos) {
        cout << "Position out of bounds" << endl;
        return;
    }

    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;
    delete temp;
}

void display(Node* head) {
    if (head == NULL) {
        cout << "List is empty" << endl;
        return;
    }

    Node* temp = head;
    do {
        cout << temp->data << " <-> ";
        temp = temp->next;
    } while (temp != head);
    cout << "HEAD" << endl;
}

int main() {
    Node* head = NULL;
    insertAtHead(head, 1);
    insertAtHead(head, 2);
    insertAtHead(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    display(head);
    deleteNode(head, 2);
    display(head);
    deleteNode(head, 1);
    display(head);

    return 0;
}
