#include<iostream.h>
#include<conio.h>
using namespace std;
class number
{
 int a, b, c;
 public:
 void getdata();
 void putdata();
};

void number::getdata()
{
 cout<<endl<<"To find the largest among three Integers";
 cout<<endl<<"Enter any three numbers of your choice: ";
 cin>>a>>b>>c;
}

void number::putdata()
{
 if(a>b&&a>c)
 {
  cout<<"First number is greator";
 }
 else if(b>a&&b>c)
 {
  cout<<"Second number is greator";
 }
 else if(c>a&&c>b)
 {
  cout<<"Third number is greator";
 }
}

void main()
{
 clrscr();
 class number n;
 n.getdata();
 n.putdata();
 getch();
}

