//access specifiers
#include<iostream>
using namespace std;

class base
{
    public:
    int x;
    protected:
    int y;
    private:
    int z;
};

class child1 : public base
{
    // x is public
    // y is protected
    // z is not accesible
};

class child2 : private base
{
    // x is protected
    // y is protected
    // z is not accesible
};

class child3 : protected base
{
    // x is private
    // y is private
    // z is not accesible
};

int main()
{
    
}