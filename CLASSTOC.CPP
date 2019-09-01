//through constructor:-
#include<iostream.h>
#include<conio.h>
//using namespace std;
class Product
{
 private:
  int m,n;
 public:
  void setData(int x,int y)
  { m=x; n=y; }

  int getM() 	//member fn
  { return (m);}
  int getN()              //member fn
  { return(n); }
};     //end of class product

class Item
{
 private:
  int a,b;
 public:
  void showData()
  { cout<<"\na= "<<a<<"\nb= "<<b; }

   Item() {}	//default constructor

   Item(Product p)
   {
    a=p.getM();
    b=p.getN();
   }
};    //end of class item

void main()
{
 clrscr();
 Item i1;
 Product p1;
 p1.setData(3,4);
 i1=p1;
 i1.showData();
 getch();
}
