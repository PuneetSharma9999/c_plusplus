#include<iostream>
using namespace std;
template <typename T> void  swap(T x,T y)
{
    cout<<"before swap: "<<x<<"  "<<y<<endl;

    T temp=x;
    x=y;
    y=temp;
    
    cout<<"after swap: "<<x<<"  "<<y<<endl;
}
int main()
{

swap(10,12);
swap(11.4,11.7);
    return 0;
}

