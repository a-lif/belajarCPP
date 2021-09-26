#include <iostream>
#include <limits>
using namespace std;

int main(){

	//bilangan bulat
	unsigned int a = 3;
	int b = 4;
	long c = 5;
	short d = 6;

	//bilangan decimal
	float e = 1.0;
	double f = 2.5;

	//character
	char g = 'a';

	//boolean
	bool h = true; // true/false

	cout << a << endl;
	cout << sizeof(a)<< " Byte" << endl;
	cout << numeric_limits<int>::max() << endl;
	cout << numeric_limits<int>::min() << endl;
	cin.get();
	return 0;
}	