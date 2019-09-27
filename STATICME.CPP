//static member function
#include<iostream.h>
#include<conio.h>
//using namespace std;
class Account
{
 public:
  int balance;
  static double roi;    //doesn't belong to object

  void fnBalance(int b)
  {
   balance=b;
   cout<<endl<<"Balance is: "<<balance;
  }
  static void fnRoi(double r)
  {
   roi=r;
   cout<<endl<<"roi is: "<<roi;
  }
};
double Account::roi=3.5;
void main()
{
 clrscr();
 Account a1; //a1 contains balance only and not roi
 Account::fnRoi(4.5);  //calling static member without object/instance
 a1.fnRoi(5.6);       //calling static member with object/instance
 getch();
}
