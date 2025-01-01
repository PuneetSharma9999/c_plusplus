#include<iostream>
using namespace std;
class shape
{
    public:
    void setWidth(int w)
    {
        width=w;
    }
    void setHeight(int h)
    {
        height=h;
    }
    protected:
    int width;
    int height;
};
class Rectangle: public shape
{
    public:
    int getArea()
    {
        return(width*height);
    }
};
int main()
{
    Rectangle Rect;
    Rect.setWidth(5);
    Rect.setHeight(7);
    cout<<"Total Area: "<<Rect.getArea()<<endl;
}

