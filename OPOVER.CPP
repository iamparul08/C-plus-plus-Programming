//shows how the unary minus operator is overloaded
#include<iostream.h>
#include<conio.h>
//using namespace std;
class Space
{
 int x,y,z;
 public:
  void getData(int,int,int);
  void display();
  void operator -();	//overload unary minus
};
void Space::getData(int a, int b,int c)
{ x=a; y=b; z=c; }

void Space::display()
{
 cout<<x<<" ";
 cout<<y<<" ";
 cout<<z<<" ";
}

void Space::operator -()
{ x = -x; y = -y; z = -z; }

void main()
{
 clrscr();
 Space s;
 s.getData(10,-20,30);
 cout<<endl<<"S: ";
 s.display();
 -s;	//activates operator -() fn
 cout<<endl<<"Now S: ";
 s.display();
 getch();
}