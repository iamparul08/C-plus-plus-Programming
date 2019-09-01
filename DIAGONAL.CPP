#include<iostream.h>
#include<conio.h>
void main()
{
int a[10][10],m,n,i,j;
clrscr();
cout<<endl<<"Enter the no of rows and columns: ";
cin>>m>>n;
if(m!=n)
cout<<endl<<"Matrix is not a square matrix.";
else
cout<<"\n Matrix is a square matrix and enter the "<<m*n<<" elements of the matrix: ";
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
cin>>a[i][j];
}
}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
if(i!=j)
a[i][j]=0;
}
}
cout<<endl<<"The matrix so obtained is a diagonal matrix";
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
cout<<endl<<a[i][j]<<"\t";
}
cout<<endl;
}
getch();
}