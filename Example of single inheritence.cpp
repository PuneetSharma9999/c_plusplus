#include<iostream>
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
class Rectangle: public shape
{
	public:
		int getArea()
		{
			return(Width*Height);
		}
};
void main()
{
	Rectangle Rect;
	Rect.setWidth(5);
	Rect.setHeight(7);
	cout<<"Total Area: "<<Rect.getArea()<<endl;
}
