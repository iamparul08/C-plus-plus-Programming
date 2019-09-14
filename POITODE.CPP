//pointer to derived class
#include<iostream.h>
#include<conio.h>
using namespace std;
class BJ
{
 public:
  int b;
  void show()
  {
   cout<<"\nb= "<<b;
  }
};
class DJ:public BJ
{
 public:
  int d;
  void show()
  {
   cout<<"\nb= "<<b;
   cout<<"\nd= "<<d;
  }
};
void main()
{
 clrscr();
 BJ *bptr; //base class pointer
 BJ base;  //object of base class
 bptr=&base; //base address
 bptr->b=100;
 cout<<"\nbptr points to base class";
 bptr->show();

 DJ derived; //object of derived class
 bptr=&derived;
 bptr->b=200;
 cout<<"\nbptr now points to derived object";
 bptr->show();

 DJ *dptr;
 dptr=&derived;
 dptr->d=300;
 cout<<"\ndptr is derived type pointer";
 dptr->show();
 getch();
}