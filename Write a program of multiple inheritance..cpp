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
class PaintCost
{
    public:
    int getCost(int area)
    {
        return area*70;
    }
};
class Rectangle: public shape, public PaintCost
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
    int area;
    Rect.setWidth(6);
    Rect.setHeight(9);
    area=Rect.getArea();
    cout<<"Total Area: "<<Rect.getArea()<<endl;
    cout<<"Total Cost: $"<<Rect.getCost(area)<<endl;
}

