/*constructor overloading:when there are more than 1 constructor declared in a class
dated:nov12,2018
created by:parul mathur*/

#include<iostream.h>
#include<conio.h>
class sample
{
 int n,m;
  public:
   sample()        	//default cons
    {
     m=n=0;
    }

   sample(int a,int b)        	//para cons
    {
     m=a;
     n=b;
    }

   sample(sample &p) //copy cons
   {
    m=p.m;
    n=p.n;
   }

void display()
{
 cout<<endl<<m<<endl<<n;
}
};
void main()
{
class sample t1(100,500);
sample t2=t1;
sample t3=t2;
clrscr();
t2.display();
getch();
}