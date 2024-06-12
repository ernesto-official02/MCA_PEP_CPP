//demonstrate to calculate the volume or area 
#include<iostream>

using namespace std;

class shapes
{
private:
  int l;   //length
  int b;   //breadth
  int h;   //height

  public:

  void get()
  {
    cin>>l>>b>>h;
  }
  int calculate_Area()
  {
    return l*b;
  }

  int calculate_volume()
  {
    return l*b*h;
  }
};


int main()
{   
    shapes shape1;
    shape1.get();
    cout<<shape1.calculate_Area()<<endl;
    cout<<shape1.calculate_volume();

}