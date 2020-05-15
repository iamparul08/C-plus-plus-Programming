/*finding transpose of matrix using class*/
//METHOD 1(inside the class)

#include<iostream.h>
#include<conio.h>
using namespace std;
class matrix
{
 int a[10][10],i,j,m,n;
 public:
  void getdata()
  {
  cout<<endl<<"Enter the no of rows and columns";
  cin>>m>>n;
  cout<<endl<<"Enter the "<<m*n<<" elements";
  for(i=0;i<n;i++)
  {
   for(j=0;j<m;j++)
   {
    cin>>a[i][j];
   }
  }
}
void putdata()
{
 cout<<endl<<"Input matrix: \n";
 for(i=0;i<n;i++)
 {
  for(j=0;j<m;j++)
  {
   cout<<a[i][j]<<"\t";
  }
  cout<<endl;
 }
 cout<<endl<<"\n Transpose of the matrix:\n";
 for(i=0;i<n;i++)
 {
  for(j=0;j<m;j++)
  {
   cout<<a[j][i]<<"\t";
  }
  cout<<endl;
 }
} 	//end of void putdata
}; 	 //end of class
void main()
{
 clrscr();
 class matrix m;
 m.getdata();
 m.putdata();
 getch();
}


/*METHOD 2    (outside the class)
#include<iostream.h>
#include<conio.h>
class transpose{
int a[10][10],i,j,m,n;
public:
void getdata();
void putdata();
};
void transpose::getdata(){
cout<<"\n Enter the no of rows and columns: ";
cin>>m>>n;
cout<<"Enter the "<<m*n<<" elements:\n";
for(i=0;i<n;i++){
for(j=0;j<m;j++){
cin>>a[i][j];
}
}
}
void transpose::putdata(){

cout<<"The input matrix is: \n";
for(i=0;i<n;i++){
for(j=0;j<m;j++){
cout<<a[i][j]<<"\t";
}
cout<<endl;
}
cout<<"The transpose of the matrix is:\n ";
for(i=0;i<n;i++){
for(j=0;j<m;j++){
cout<<a[j][i]<<"\t";
}
cout<<endl;
}
}
void main(){
class transpose t;
clrscr();
t.getdata();
t.putdata();
getch();
}              */
