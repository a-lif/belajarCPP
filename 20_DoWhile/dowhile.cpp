#include <iostream>
using namespace std;

int main()
{
	int a = 1;

	do {
		cout << "Hello World ";
		cout << a << endl;
		a++;
	}while(a <= 10);

	cout << "program selesai" << endl;

	cin.get();
	return 0;
}