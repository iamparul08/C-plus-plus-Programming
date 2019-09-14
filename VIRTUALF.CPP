//virtual function
#include<conio.h>
#include<iostream.h>
using namespace std;
class Base
{
 public:
  void display()
  {
   cout<<"\n Display base";
  }
  virtual void show()
  {
    cout<<"\n Show base";
  }
};
class Derived:public Base
{
 public:
  void display()
  {
   cout<<"\n Display derived";
  }
  void show()
  {
   cout<<"\n Show derived";
  }
};
void main()
{
 clrscr();
 Base *bptr;  //pointer of base class
 Base b;     //object of base class
 Derived d;  //object of derived class
 bptr=&b;
 bptr->display();  //base class display
 bptr->show();     //base class show
 bptr=&d;
 bptr->display();    //base class display
 bptr->show();       //derived class show
 getch();
}