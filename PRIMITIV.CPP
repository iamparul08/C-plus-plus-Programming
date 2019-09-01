//primitive/basic to class type(implemented through constructors)
#include<iostream.h>
#include<conio.h>
using namespace std;
class Complex
{
 private:
  int a,b;
 public:
  Complex()  //default constructor
  {}
  Complex(int k)     //parameterized
   { a=k; b=0; }
  void setData(int x,int y)
  {
   a=x; b=y;
  }
  void showData()
  {
  cout<<endl<<"a= "<<a<<endl<<"b= "<<b;
  }
}; //end of class
void main()
{
 clrscr();
 Complex c1;	//object created
 int x=5;
 c1=x;     //primitive type to class type
 c1.showData();
 getch();
} 
