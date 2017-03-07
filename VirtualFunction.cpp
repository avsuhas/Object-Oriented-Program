#include<iostram>
using namespace std;
class A
{
  int a;
  public:
    void virtual display()   //virtual function
    {
      cout<<" display inside classA" <<endl;
     }
 };
 
 class B: public A
 {
    public:
      void display()
        {
            cout<<"display inside classB"<<endl;
         }
 };
 
 int main()
 {
    A a;
    B b;
    cout<< sizeof(b) <<endl;
    return 0;
 }
       
