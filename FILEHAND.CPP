//reading content/data from the file
#include<fstream.h>
#include<conio.h>
#include<iostream.h>
void main()
{
 clrscr();
 ifstream fin;
 char ch;
 fin.open("myFile.txt");
 fin>>ch;
 while(!fin.eof())
 {
  cout<<ch;
  fin>>ch;
 }
 fin.close();
 getch();
}