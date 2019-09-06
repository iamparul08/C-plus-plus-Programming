#include<iostream.h>
#include<conio.h>
//using namespace std;
class Student
{
 protected:
  int a,roll_no;
 public:
  void getno();
  void putno();
};    //end of student class
void Student::getno()
{
 cout<<endl<<"Enter the roll no of the student: ";
 cin>>a;
 roll_no=a;
}
void Student::putno()
{
 cout<<endl<<"Roll no is: "<<roll_no;
}

class Test:public Student
{
 protected:
  float c,d,sub1,sub2;
 public:
  void getmarks();
  void putmarks();
};  // end of test class
void Test::getmarks()
{
 cout<<endl<<"Enter the marks of student in sub1 and sub2: ";
 cin>>c>>d;
 sub1=c;
 sub2=d;
}
void Test::putmarks()
{
 cout<<endl<<"Marks in sub1: "<<sub1;
 cout<<endl<<"Marks in sub2: "<<sub2;
}
class Sports
{
 protected:
  int g,score;
 public:
  void getscore();
  void putscore();
};//end of sports class
void Sports::getscore()
{
 cout<<endl<<"Enter the score of the student in sports: ";
 cin>>g;
 score=g;
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
   total=sub1+sub2+score;
   putno();
   putmarks();
   putscore();
   cout<<endl<<"Total is: "<<total;
  }
};     //end of result class
void main()
{
 clrscr();
 Result r;
 r.getno();
 r.getmarks();
 r.getscore();
 r.display();
 getch();
}