//enter the age and names of 5 employees and display them
#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
using namespace std;
class Employee
{
 private:
  char name[30];
  int age;
 public:
  void getData();
  void showData();
};
void Employee::getData()
{
 cout<<endl<<"Enter the name and age of employee: ";
 cin>>name>>age;
}
void Employee::showData()
{
 cout<<endl<<"The name and age of employee is: "<<name<<endl<<age;
}
void main()
{
 clrscr();
 Employee e[5];
 int i;
 for(i=0;i<5;i++)
 {
  e[i].getData();
 }
 for(i=0;i<5;i++)
 {
  e[i].showData();
 }
 getch();
}
