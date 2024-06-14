//multiple inheritance

#include<iostream>

using namespace std;

class parent1
{
    public:
       void print()
    {
        cout<<"here the function parent2"<<endl;
    }

};

class parent2
{    public:
    void print()
    {
        cout<<"here the function parent2"<<endl;
    }
};


class child : public parent1 , public parent2
{


};
int main()
{
    child obj;
    obj.parent2::print();
}