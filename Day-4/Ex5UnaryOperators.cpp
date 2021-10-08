#include<iostream>
using namespace std;

int main()
{
	int  a = 5, b = 5, x = 5, y = 5;

	cout<<"===== post-Increment ========"<<endl;
	cout<< a++ <<endl;
	cout<< a++ <<endl;
	cout<< a++ <<endl;
	cout<< a++ <<endl;
	cout<< a++ <<endl<<endl;
	
	cout<<"===== Pre-Increment ========"<<endl;
	cout<< ++b <<endl;
	cout<< ++b <<endl;
	cout<< ++b <<endl;
	cout<< ++b <<endl;
	cout<< ++b <<endl<<endl;

	cout<<"===== Post-Decrement ========"<<endl;
	cout<< x-- <<endl;
	cout<< x-- <<endl;
	cout<< x-- <<endl;
	cout<< x-- <<endl<<endl;
	
	cout<<"===== Pre-Decrement ========"<<endl;
	cout<< --y <<endl;
	cout<< --y <<endl;
	cout<< --y <<endl;
	cout<< --y <<endl;
	cout<< --y <<endl;

	return 0;
}

