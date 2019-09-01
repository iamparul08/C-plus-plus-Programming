#include<iostream.h>
#include<conio.h>
class trans{
int m,n,i,j,a[10][10];
public:
void getdata();
void showdata();
};
void trans::getdata(){
cout<<endl<<"Enter the no of rows and columns: ";
cin>>n>>m;
cout<<endl<<"Enter the "<<n*m<<" elements: ";
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
cin>>a[i][j];
}
}
}
void trans::showdata(){
cout<<endl<<"The input matrix is:";
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
cout<<endl<<a[i][j];
cout<<"\t";
}
cout<<endl;
}
cout<<endl<<"The transpose of the matrix= ";
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
cout<<endl<<a[j][i];
cout<<"\t";
}
cout<<endl;
}
}
void main()
{
class trans a;
clrscr();
cout<<endl<<"***Transpose of the input matrix***\n";
a.getdata();
a.showdata();
getch();
}