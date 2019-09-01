#include<iostream.h>
#include<conio.h>
using namespace std;
class B;	//forward declaration
class A
{
 private:
  int a;
 public:
  void setData(int x)      //member fn
  { a=x; }
  friend void fun(A,B); //declaration of friend function
};
class B
{
 private:
  int b;
 public:
   void setData(int y)
   { b=y; }
 friend void fun(A,B); //non member fn
};
void fun(A o1,B o2) //definition
{
 cout<<endl<<"Multiplication is "<<o1.a*o2.b;
}
void main()
{
 clrscr();
 A obj1;
 B obj2;
 obj1.setData(2);
 obj2.setData(3);
 fun(obj1,obj2);
 getch();
}