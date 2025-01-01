#include<iostream>
using namespace std;
class shape
{
	public:
		void setWidth(int w)
		{
			Width=w;
		}
		void setHeight(int h)
		{
			Height=h;
		}
		protected:
			int Width;
			int Height;
};
class paintcost
{
	public:
		int getcost(int Area)
		{
			return Area*70;
		}
};
class Rectangle:public shape, public paintcost
{
	public:
		int getArea()
		{
			return (Width*Height);
		}
};
int main()
{
	Rectangle Rect;
	int Area;
	Rect.setWidth(5);
	Rect.setHeight(7);
	Area=Rect.getArea();
	cout<<"Total Area: "<<Rect.getArea()<<endl;
	cout<<"Total paintcost: $"<<Rect.getcost(Area)<<endl;
}
