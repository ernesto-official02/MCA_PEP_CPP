//creating base class pointer to access 
#include<iostream>

using namespace std;

class base 
{
    public:
    void print()
    {
        cout<<"From base"<<endl;
    }
};

class derived : public base
{
  public:
  void print()
  {
    cout<<"from derived "<<endl;
  }
};


int main()
{
    // derived d1;
    // d1.base::print();

    derived d1;
     
     base *ptr = &d1;
     ptr->print();
}