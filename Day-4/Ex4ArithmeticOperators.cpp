#include<iostream>
using namespace std;

int main()
{
	int  x, y, add, sub, mul, div, mod; 

	cout<<"Enter value for x and y: ";
	cin>>x>>y;
	
	add = x + y;
	cout<<"Addition is = "<<add<<endl;

	sub = x - y;
	cout<<"substraction is = "<<sub<<endl;

	mul = x * y;
	cout<<"Multiplication is = "<<mul<<endl;

	div = x / y;
	cout<<"Division is = "<<div<<endl;

	mod = x % y;
	cout<<"Remainder is = "<<mod<<endl<<endl;
	
	return 0;
}
