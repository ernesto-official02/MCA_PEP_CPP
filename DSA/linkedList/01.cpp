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

void insertAtHead(Node* &head , int val)
{
    Node* n= new Node(val);

    n->next=head;
    head = n;
}
//searh a key in a linkedlist using while loop 

bool searchKey(Node* head, int key)
{
    Node* temp = head;
    while (temp != NULL)
    {
        if (temp->data == key)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}
//display the values of linkedlist'
void display(Node* head)
{
    Node* temp = head;

    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << endl;
}

void deleteAtHead(Node * &head )
{
    Node* todelete=head;
    head =head->next;
    delete todelete;
}

void deletion(Node* &head , int val)
{
    Node* temp= head;
    if(head==NULL)
    {
        return;
    }
    while(temp->next->data!=val)
    {
        temp =temp->next;
    }
     Node* todelete =temp->next;
     temp->next=temp->next->next;
     delete todelete;
}

int main()
{
    Node* head =NULL;
     insertAtTail(head,1);
     insertAtTail(head,2);
     insertAtTail(head,3);
     insertAtTail(head,4);
     insertAtTail(head,5);
     insertAtTail(head,6);
     display(head);
     deleteAtHead(head);
     display(head);
     deletion(head,3);
     display(head);
     
    if(searchKey(head , 5))
    {
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }

}