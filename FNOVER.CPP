//function overloading
#include<iostream.h>
#include<conio.h>
using namespace std;
int volume(int);
double volume(double,int);
long volume(long,int,int);
void main()
{
 clrscr();
 cout<<endl<<volume(10)<<"\n";
 cout<<endl<<volume(2.5,8)<<"\n";
 cout<<endl<<volume(100,75,15)<<"\n";
 getch();
}
int volume(int s)
{
 return(s*s*s);	//cube
}
double volume(double r,int h)      //cyclinder
{
 return(3.14*r*r*h);
}
long volume(long l,int b,int h)  //rectangular box
{
 return(l*b*h);
}
