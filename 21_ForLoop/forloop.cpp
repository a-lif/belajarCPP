#include <iostream>
using namespace std;

int main()
{

	cout << "loop 1\n";
	for (int i = 1; i <= 10; i++){
		cout << i << endl;
	}

	cout << "\nloop 2\n";
	for (int i = 1; i <=10; i += 2){
		cout << i << endl;
	}

	cout << "\nloop 3\n";
	for (int i = 1; i >= -10; i--){
		cout << i << endl;
	}

	cout << "\nloop 4\n";
	int total = 0;
	for (int i = 1; i <= 10; total += i, i++){
		cout << i << " || " << total << endl;
	}
	return 0;
}