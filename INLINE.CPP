#include<iostream.h>
#include<conio.h>
inline void big(int a,int b)
{
return(a>b?a:b);
}
void main()
{
clrscr();
cout<<endl<<big(20,30);
cout<<endl<<big(60,40);
getch();
}