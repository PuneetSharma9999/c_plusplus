#include <iostream>
using namespace std;
class sum
{ int A, B, total;
 public:
    void getdata();
    void display();
};
void sum::getdata ()
{        cout<<"\n Enter the value of A and B: ";
         cin>>A>>B;
}
void sum::display ()
{
        total = A+B;
        cout<<"\n the sum of A and B="<<total;
}
int main()
{   sum s;
   
    s.getdata();
    s.display(); 
}

