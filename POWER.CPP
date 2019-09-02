//to calculate power with the help of function
#include<iostream.h>
#include<conio.h>
#include<math.h>

using namespace std;
double m;
int n;
 void power()
  {
   cout<<endl<<pow(m,n);
  }

void main()
{
 clrscr();
 cout<<"\n Enter the number and exponent: ";
 cin>>m>>n;
 power();
 getch();
}
