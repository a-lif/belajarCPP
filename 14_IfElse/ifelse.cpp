#include <iostream>
using namespace std;

int main()
{
	int a;

	cout << "masukkan sebuah nilai: ";
	cin >> a;

	if (a == 5){
		cout << "ini adalah bilangan 5" << endl;
	} else if (a == 3){
		cout << "ini adalah bilangan 3" << endl;
	} else if (a == 1){
		cout << "ini adalah bilangan 1" << endl;
	} else {
		cout << "ini bukan bilangan 5,3 maupun 1" << endl;
	}

	cin.get();
	return 0;
}