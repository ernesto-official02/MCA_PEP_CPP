#include<iostream>
using namespace std;

class Queue
{
    public:
    int *arr;
    int front;
    int rear;
    int size;

    Queue(){
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    void enqueue(int val){
        if(rear =size -1)
        {
            cout<<"Queue is overflow"<<endl;
        }
       rear++;
       arr[rear] = val;

       if(front=-1)  front++;

    }

    void dequeue(){
        if(front == -1 || front > rear)
        {
            cout<<"No elements in queue"<<endl;
            return ;
            }

    }

    void display()
    {


    }
};
int main()
{
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
     q.display();
    q.dequeue();
    q.display();
    return 0;


}