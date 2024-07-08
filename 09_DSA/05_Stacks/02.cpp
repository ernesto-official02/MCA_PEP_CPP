// stack implementation using arrays 
#include<iostream>
using namespace std;

class mystack
{
    public:
    int *arr;
    int top;
    int size;

    mystack()
{
    arr = new int [size];
    top = -1;
}



void push(int val)
{  
    if(top == size-1){
        cout<<"stack overflow"<<endl;
        return;
    }
    top++;
    arr[top]=val;

}

void pop()
{
    if(top==-1)
    {
        cout<<"stack underflow"<<endl;
        return ;
    }
    top--;
}


void peek(){
    if(top>=0) cout<<arr[top]<<endl;
    else{
        cout<<"stack is empty"<<endl;
        return;
    }
}

void display()
{
    if(top==-1)
    {
        cout<<"stack is empty"<<endl;
        return;
    }
    for(int i=top; i>=0; i--)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
};

int main()
{  
    mystack st;
    st.push(1);
    st.push(2);
    st.push(3);
        
    st.peek();
    st.pop();
    st.display();

}