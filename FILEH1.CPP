//writing data to a file
#include<iostream.h>
#include<fstream.h>
#include<conio.h>
using namespace std;
void main()
{
 clrscr();
 ofstream fout;
 fout.open("myFile.txt");
 getch();
 fout<<"Hello";
 getch();
 fout.close();
 getch();
}
