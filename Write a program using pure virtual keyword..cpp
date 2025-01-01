#include <iostream> 
using namespace std;         
class Base                           //Abstract base class
{
    public:
    virtual void show()=0;  //Pure Virtual function
};
class Derived:public Base
{
    public:
    void show()
    {
        cout<<"Implementation of Virtual function in derived class";
    }
};
int main()
{
    //Base obj;        //Compile time error
    Base *b;
    Derived d;
    b=&d;
    b->show();
}

