#include<iostream.h>
#include<conio.h>
using namespace std;
class Student
{
 protected:
  int roll_no;
 public:
  void getno(int);
  void putno();
};    //end of student class
void Student::getno(int a)
{
 roll_no=a;
}
void Student::putno()
{
 cout<<endl<<"Roll no is: "<<roll_no;
}

class Test:public Student
{
 protected:
  float sub1,sub2;
 public:
  void getmarks(float,float);
  void putmarks();
};  // end of test class
void Test::getmarks(float a,float b)
{
 sub1=a;
 sub2=b;
}
void Test::putmarks()
{
 cout<<endl<<"Marks in sub1: "<<sub1;
 cout<<endl<<"Marks in sub2: "<<sub2;
}
class Sports
{
 protected:
  int score;
 public:
  void getscore(int);
  void putscore();
};//end of sports class
void Sports::getscore(int c)
{
 score=c;
}
void Sports::putscore()
{
 cout<<endl<<"Score is: "<<score;
}

class Result:public Test,public Sports
{
 protected:
  float total;
 public:
  void display()   //display fn
  {
   total=sub1+sub2;
   cout<<endl<<"Total is: "<<total;
   putno();
   putmarks();
   putscore();
  }
};     //end of result class
void main()
{
 clrscr();
 Result r;
 r.getno(91);
 r.getmarks(87.6,88.0);
 r.getscore(56);
 r.display();
 getch();
}

