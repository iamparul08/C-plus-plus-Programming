//this pointer
#include<iostream.h>
#include<conio.h>
class Box
{
 private:
  int l,b,h;	//instance variable
 public:
  void setDimension(int l,int b,int h)	//local variable
  {
   this->l=l;
   this->b=b;
   this->h=h;
  }
  void showDimension()
  {
   cout<<"\nl = "<<l<<"\nb = "<<b<<"\nh = "<<h;
  }
};
void main()
{
 clrscr();
 Box smallBox;
 smallBox.setDimension(12,4,5);
 smallBox.showDimension();
 getch();
}