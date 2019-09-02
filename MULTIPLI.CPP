//multiplication of two matrices
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
 int a[10][10],b[10][10],c[10][10],i,j,r1,c1,r2,c2,k;
 clrscr();
 cout<<endl<<"**Multiplication of the matrices**";
 cout<<endl<<"Enter the no of rows and columns of first matrix: ";
 cin>>r1>>c1;
 cout<<endl<<"Enter the no of rows and columns of second matrix: ";
 cin>>r2>>c2;
  if(c1!=r2)
  {
    cout<<endl<<"The matrix order is not same";
    exit(0);
  }
 cout<<endl<<"Enter the "<<r1*c1<<" elements of first matrix";
  for(i=0;i<r1;i++)
  {
   for(j=0;j<c1;j++)
   {
   cin>>a[i][j];
   }
  }
 cout<<endl<<"Enter the "<<r2*c2<<" elements of second matrix";
  for(i=0;i<r2;i++)
  {
   for(j=0;j<c2;j++)
   {
    cin>>b[i][j];
   }
  }
 cout<<"\nThe first matrix=\n";
  for(i=0;i<r1;i++)
  {
   for(j=0;j<c1;j++)
   {
    cout<<endl<<a[i][j]<<"\t";
   }
  }
 cout<<endl<<"The second matrix=\n";
 for(i=0;i<r2;i++)
 {
  for(j=0;j<c2;j++)
  {
   cout<<endl<<b[i][j]<<"\t";
  }
 }
 cout<<endl<<"\nMultiplication of two matrices";
 for(i=0;i<r1;i++)
 {
  for(j=0;j<c2;j++)
  {
   c[i][j]=0;
   for(k=0;k<c1;k++)
   {
    c[i][j]=c[i][j]+a[i][j]*b[i][j];
   }
  cout<<endl<<c[i][j];
  }
 }
getch();
}