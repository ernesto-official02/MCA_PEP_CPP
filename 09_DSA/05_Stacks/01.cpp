// stack is linear dsa LIFO (last in first out)
#include<iostream>
using namespace std;
#include<iostream>
using namespace std;

class Stack {
    int *arr; // array to store elements
    int top; // index of top element
    int capacity; // maximum capacity of the stack

public:
    Stack(int capacity) {
        this->capacity = capacity;
        arr = new int[capacity];
        top = -1; // initialize top to -1, indicating an empty stack
    }

    ~Stack() {
        delete[] arr;
    }

    void push(int element) {
        if (top == capacity - 1) {
            cout << "Stack overflow! Cannot push " << element << endl;
            return;
        }
        arr[++top] = element;
    }

    int pop() {
        if (top == -1) {
            cout << "Stack underflow! Cannot pop" << endl;
            return -1; // return a sentinel value to indicate error
        }
        return arr[top--];
    }

    int peek() {
        if (top == -1) {
            cout << "Stack is empty" << endl;
            return -1; // return a sentinel value to indicate error
        }
        return arr[top];
    }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == capacity - 1;
    }
};

int main() {
    Stack stack(5); // create a stack with capacity 5

    stack.push(1);
    stack.push(2);
    stack.push(3);

    cout << "Top element: " << stack.peek() << endl;

    cout << "Popped element: " << stack.pop() << endl;

    cout << "Top element: " << stack.peek() << endl;

    return 0;
}



// push(int element): adds an element to the top of the stack
// pop(): removes the top element from the stack and returns it
// peek(): returns the top element without removing it
// isEmpty(): checks if the stack is empty
// isFull(): checks if the stack is full