//copy constructor
#include<iostream.h>
#include<conio.h>
class code{
	int id;
public:
	code(){}	//constructor
	code(int a) {id=a;}	//constructor again
	code(code &x)	//copy constructor
	{
	id=x.id;
	}
	void display(void){
	cout<<endl<<id;
	}
};
void main()
{
	code A(100);	//obj A is created and initialized
	code B(A);	//copy constructor called
	code C=A;	//copy cons called again
	code D;		//D is created, not initialized
	D=A;
	clrscr();
	cout<<"\n id of A: ";A.display();
	cout<<"\n id of B: ";B.display();
	cout<<"\n id of C: ";C.display();
	cout<<"\n id of D: ";D.display();
	getch();
}