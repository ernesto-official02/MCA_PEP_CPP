//to print the middle node of the linkedlist in c++ using count approach
#include <iostream>
 using namespace std;
struct Node {
int data;
Node* next;


Node(int val)
{
data=val;
next=NULL;
}
};

void insertAtHead(Node* &head , int val)
{
Node* n= new Node(val);

n->next=head;
head = n;
}

// void printMiddleNode(Node* head)
// {
//     if(head==NULL) return NULL;

//     Node* slow =head;
//     Node* fast =head;

//     while(fast!=NULL && fast->next!=NULL)
//     {
//         slow=slow->next;
//         fast=fast->next->next;
//     }
//     return slow;
// }

void printMiddleNode(Node* head) {
int count = 0;
Node* temp = head;
while (temp != NULL) {
    count++;
    temp = temp->next;
}

temp = head;
for (int i = 0; i < count / 2; i++) {
    temp = temp->next;
}

 cout << "Middle node: " << temp->data << std::endl;
}

int main() {
Node* head =NULL;
    insertAtHead(head,1);
    insertAtHead(head,2);
    insertAtHead(head,3);
    insertAtHead(head,4);
    insertAtHead(head,5);
//  insertAtHead(head,6);

printMiddleNode(head);

return 0;
}