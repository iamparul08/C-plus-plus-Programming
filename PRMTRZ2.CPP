#include<iostream.h>
#include<conio.h>
	class sample{
	int x,y;
	public:
	sample(int a){
	x=y=a;
	}
	sample(int m,int n){
	x=m;
	y=n;
	}
	void showdata(){
	cout<<endl<<"x: "<<x<<endl<<"y: "<<y;
		}
		};
void main(){
sample s1(10),s2(10,20);
clrscr();
s1.showdata();
s2.showdata();
getch();
}
