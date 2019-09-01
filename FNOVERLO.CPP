//fn area is overloaded four times
#include<iostream.h>
#include<conio.h>

				       //errors(ambiguity)
//declarations(protoype)
int area(int);
int area(int, int);
float area(float, float);
float area(float);

void main() {

clrscr();
cout<<endl<<"\n Area of square is: "<<area(10);
cout<<endl<<"\n Area of rectangle is: "<<area(2,2);
cout<<endl<<"\n Area of triangle is: "<<area(2.0,1.0);
cout<<endl<<"\n Area of Circle is: "<<area(1.0);
getch();
}
int area(int a) {
return(a*a);
}
int area(int l, int b) {
return(l*b);
}
float area(float h, float f) {
return((f*h)/2);
}
float area(float r) {
return(3.14*r*r);
}

