//circular linkedlist
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAthead(Node* &head, int val)
{
    Node* n = new Node(val);
    if (head == NULL)
    {   
        n->next = n;
        head = n;
        return;
    }
    Node* temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->next=head;
    head=n;
}


// void insertAtTail(Node* & head, int val)

// {
//    Node * n = new Node(val);
//    if(head== NULL)
//    {
//     insertAthead(head, val);
//     return ;
//    }
//    Node* temp=head;
//    while(temp->next != head)
//    {
//     temp=temp->next;

//    }
//    temp->next=n;
//    n->next=head;
// }

void deletion(Node* &head , int pos)
{
  Node* temp=head;
  int count =1;
  while(count!=pos-1)
  {
    temp=temp->next;
    count++;
  }
  Node* todelete = temp->next;
  temp->next=temp->next->next;

  delete todelete;
}

void display(Node* head)
{
    if (head == NULL)
    {
        cout << "Queue is empty" << endl;
        return;
    }

    Node* temp = head;
    do
    {
        cout << temp->data << "->";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
}

int main()
{
    Node* head = NULL;
    insertAthead(head, 1);
    insertAthead(head, 2);
    insertAthead(head, 3);
    insertAthead(head, 4);
    insertAthead(head, 5);
    insertAthead(head, 6);
    display(head);
    deletion(head , 2);
    display(head);

    return 0;
}
