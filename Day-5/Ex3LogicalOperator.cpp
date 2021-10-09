#include<iostream>
using namespace std;

int main()
{
	int x = 5, y = 10;
	
	//&& - logical And (Every Expression must be true)
	cout<< (x>3 && x<7) <<endl; //returns 1
	
	//|| - logical OR (at least one Expression must be true)
	cout<< (x>5 || y<20) <<endl; //returns 1
	
	// !- logical Not (Opposite)
	cout<< !(x>3 && y<=10) <<endl; //returns 0
	
	return 0;
}
