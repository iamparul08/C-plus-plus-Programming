/*upper triangular matrix*/
#include<iostream.h>
#include<conio.h>
using namespace std;
void main()
{
 int a[10][10],i,j,n,m;
 clrscr();
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
 cout<<endl<<"Input matrix is: \n";
 for(i=0;i<n;i++)
 {
   for(j=0;j<m;j++)
     {
        cout<<a[i][j];
      }
 cout<<endl;
 }
 cout<<endl<<"Upper triangular matrix is: \n";
 for(i=0;i<m;i++)
 {
   for(j=0;j<n;j++)
    {
      if(i<j)
      cout<<0;
      else
      cout<<a[i][j];
    }
 cout<<endl;
 }
getch();
}
