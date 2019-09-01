/*program using constructor
no-1*/       //parameterized constructor
#include<iostream.h>
#include<conio.h>
class integer
{
int m,n;
public:
integer(int x,int y){	//constructor declared(parameterized)here x and y are parameters if int type
m=x;
n=y
		    }
void showdata(void){
cout<<endl<<"m="<<m;
cout<<endl<<"n="<<n;
		    }
};

void main(){
integer int1(0,100);//constructor called implicitly ,int1 is the object created
integer int2=integer(25,75);//const called explicitly,int2 is the object created
clrscr();
cout<<endl<<"Object1: ";
int1.showdata();
cout<<endl<<"Object2: ";
int2.showdata();
getch();
}