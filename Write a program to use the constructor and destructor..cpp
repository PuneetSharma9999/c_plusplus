#include <iostream> 
using namespace std; 
class Line
{
    public:
    int getlength();
    Line(int len); // simple constructor
    Line(const Line &obj); // copy constructor 
    ~Line(); // destructor 
    void display()
    {
        cout << "Length of line : " << length <<endl; 
    }
    private:
    int length;
};
Line::Line(int len)
{
    cout << "Normal constructor allocating ptr" << endl; 
    length= len; 
}
Line::Line(const Line &obj)
{
    cout << "Copy constructor allocating ptr" << endl; 
    length=obj.length; // copy the value
}                
Line::~Line()
{
    cout<<"Freeing memory!"<<endl;
}
int main()
{
    Line line(10),line1(line);
    line.display();
    line1.display();
}

