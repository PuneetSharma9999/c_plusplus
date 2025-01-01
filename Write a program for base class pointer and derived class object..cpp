#include <iostream> 
using namespace std; 
class Employee
{
    protected:
    int m_Empid;
    float m_fSal,m_fHRA;
    public:
    void CalcSal()
    {
        m_fSal=m_fHRA+120;
    }
};
class Trainee:public Employee
{
    private:
    float m_fTPI;
    public:
    void CalcSal()
    {
        m_fSal=m_fHRA+m_fTPI;
    }  
};
int main()
{
    Employee *poE1;
    poE1=new Employee();
    poE1->CalcSal();

    Employee *poE2;
    poE2=new Trainee();
    poE2->CalcSal();
   
    ((Trainee*)poE2)->CalcSal();
}

