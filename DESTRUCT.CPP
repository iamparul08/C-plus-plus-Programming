#include<iostream.h>
#include<conio.h>
using namespace std;
class alpha{
int count=0;
	public:
	alpha(){	//constructor
	count++;
	cout<<"\nNo of objects created"<<count;
		}

	~alpha(){       //destructor
	cout<<"\nNo of objects destroyed"<<count;
	count--;
		}

	    };

void main(){
clrscr();
cout<<"\n\nEnter main\n";
alpha A1,A2,A3,A4;
{
cout<<"\n\nEnter block1\n";
alpha A5;
}
{
cout<<"\n\nEnter block2\n";
alpha A6;
}
cout<<"\n\nRe-enter main\n";
getch();
}
