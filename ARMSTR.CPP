#include<iostream.h>
#include<conio.h>
class sample{
int n,m,a,num,s;
public:
void getdata();
void calculate();
};
void sample::getdata(){
cout<<endl<<"Enter first and last number of interval";
cin>>n>>m;
}
void sample::calculate(){
cout<<endl<<"Armstrong no between intervals"<<n<<"........"<<m;
for(int i=n;i<=m;i++){
s=0;
num=1;
while(num>0){
a=num%10;
s=s+a*a*a;
num=num/10;
}
if(s==i)
cout<<"\n"<<s<<endl;
}
}
void main(){
clrscr();
sample obj;
obj.getdata();
obj.calculate();
getch();
}