/*introducing virtual base class
We occasionally face a problem in using multiple inheritance.
When a fn with the same name appears in more than one base class.
Ambiguity may also arise in single inheritance applications
due to this drawback, virtual base class has been introduced*/
/*The dublication of inherited members due to these multiple paths can be
avoided by making the common base class as virtual base class.*/

#include<iostream.h>
#include<conio.h>
class student
{
 protected:
  int roll;
 public:
  void getno(int);
  void putno();
};
void student::getno(int a)
{
 roll=a;
}
void student::putno()
{
 cout<<endl<<"Roll no is: "<<roll;
}
class test:virtual public student
{
 protected:
  float sub1,sub2;
 public:
  void getmarks(float,float);
  void putmarks();
};
void test::getmarks(float a,float b)
{
 sub1=a;
 sub2=b;
}
void test::putmarks()
{
 cout<<endl<<"MArks in sub1: "<<sub1;
 cout<<endl<<"MArks in sub2: "<<sub2;
}
class sports:public virtual student
{
 protected:
  float score;
 public:
  void getscore(float);
  void putscore();
};
void sports::getscore(float c)
{
 score=c;
}
void sports::putscore()
{
 cout<<endl<<"Score is: "<<score;
}
class result:public test,public sports
{
 float total;
 public:
 void display();
};
void result::display()
{
 total=sub1+sub2+score;
 putno();
 putmarks();
 putscore();
  cout<<endl<<"Total is: "<<total;
}
void main()
{
 clrscr();
 result r;
 r.getno(5670);
 r.getmarks(90.2,90.5);
 r.getscore(100.0);
 r.display();
 getch();
}