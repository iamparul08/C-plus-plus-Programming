//class to basic/primitive type(implemented through casting operator)
#include<iostream.h>
#include<conio.h>
using namespace std;
class Complex
{
 private:
  int a,b;
 public:
  void setData(int x,int y)
  {
   a=x; b=y;
  }
  void showData()
  {
  cout<<endl<<"a= "<<a<<endl<<"b= "<<b;
  }
  operator int()	//type cast operator
  {
   return(a-b);
  }
}; //end of class
void main()
{
 clrscr();
 Complex c1;	//object created
 c1.setData(3,4);
 c1.showData();
 int x;
 x=c1;      //class type to primitive type
 cout<<"\nx= "<<x;
 getch();
}
