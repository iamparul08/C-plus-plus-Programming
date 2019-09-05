//2. multiple inheritance
#include<iostream.h>
#include<conio.h>
//using namespace std;
class Student
{
 protected:
  int roll;
 public:
  void getNo(int);
  void putNo();
};
void Student::getNo(int a)
{
 roll=a;
}
void Student::putNo()
{
 cout<<endl<<"Roll no is: "<<roll;
}
class Test
{
 protected:
  float sub1,sub2;
 public:
  void getMarks(float,float);
  void putMarks();
};
void Test::getMarks(float a,float b)
{
 sub1=a;
 sub2=b;
}
void Test::putMarks()
{
 cout<<endl<<"\nSub1= "<<sub1;
 cout<<"\nSub2= "<<sub2;
}
class Result:public Student,public Test
{
  float total;
 public:
  void display()
  {
   total=sub1+sub2;
   putNo();
   putMarks();
   cout<<endl<<"Total= "<<total;
  }
};
void main()
{
 clrscr();
 Result r;
 r.getNo(78);
 r.getMarks(95.0,89.5);
 r.display();
 getch();
}
