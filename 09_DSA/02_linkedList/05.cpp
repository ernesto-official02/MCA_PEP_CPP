//breaking the loop and pointing the laast node to NULL
#include<iostream>
using namespace std;

class Node
{
   public:
   int data;
   Node* next;

   Node(int val)
   {
    data=val;    
    next=NULL;
   }

};
       
    //insertion operation using linkedlist
void insertAtTail(Node*& head, int val)
{               
    Node* n = new Node(val);
    if(head==NULL)
    {
        head=n;
        return;
    }

    Node* temp =head ;
    while(temp->next!=NULL)
    {
        temp =temp->next;
    }
    temp->next=n;
         

}
Node* floydDetection(Node* head)
{
    if(head==NULL) return NULL;

    Node* slow=head;
    Node* fast=head;

while(fast!=NULL && slow!=NULL)
{
    slow = slow->next;;
    fast=fast->next->next;
    if(fast==slow) return slow;
}
return NULL;

}

Node* getstartingNode(Node* head)
{
    if(head==NULL)  return NULL;

    Node* intersection = floydDetection(head);

    Node* slow = head ;
    Node* temp = head;
    while(temp!= intersection)
    {
        slow = slow->next;
        temp = temp->next;
    }

    return slow;
}
void display(Node* head)
{
    Node* temp = head;

    while (temp!= NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << endl;
}


void removeloop(Node* head) {
    if (head == NULL) return;
    Node* startOfLoop = getstartingNode(head);
    Node* temp = head;

    while (temp != startOfLoop) {
        temp = temp->next;
    }

    Node* prev = head;
    while (prev->next != startOfLoop) {
        prev = prev->next;
    }

    prev->next = NULL;
}

int main()
{
    Node* head = NULL;

    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 5);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 6);
    display(head);

    // creating a loop for testing
    Node* temp = head;
    while(temp->next!= NULL)
    {
        temp = temp->next;
    }
    temp->next = head->next->next;

    Node* start = getstartingNode(head);
    if(start!= NULL)
    {
        cout << "Loop starts at: " << start->data << endl;
    }
    else
    {
        cout << "No loop found" << endl;
    }

    removeloop(head);
    display(head);

    return 0;
}