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
class Perimeter: public Rectangle
{
    public:
    int getPerimeter()
    {
        return(2*(width+height));
    }
};
int main()
{
    Perimeter Peri;
    int area;
    Peri.setWidth(5);
    Peri.setHeight(10);
    area=Peri.getArea();
    cout<<"Total Perimeter: "<<Peri.getPerimeter()<<endl;
    cout<<"Total Area: "<<Peri.getArea()<<endl;
    cout<<"Total Cost: $"<<Peri.getCost(area)<<endl;
}

