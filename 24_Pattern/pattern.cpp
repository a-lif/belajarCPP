#include <iostream>
using namespace std;

int main()
{
	int n;

	cout << "Masukkan panjang pola: ";
	cin >> n;

	cout << "\nPola 1\n";

	for(int i = 0; i < n; i++){
		for(int j = 0; j <= i; j++){
			cout << "*";
		}
		cout << endl;
	}

	cout << "\nPola 2\n";

	for(int i = 0; i < n; i++){
		for(int j = n; j > i; j--){
			cout << "*";
		}
		cout << endl;
	}

	cout << "\nPola 3\n";

	for(int i = 0; i < n; i++){
		for(int j = 0; j < i; j++){
			cout << " ";
		}
		for(int j = n; j > i; j--){
			cout << "*";
		}

		cout << endl;
	}

	cout << "\nPola 4\n";

	for(int i = 0; i < n; i++){
		for(int j = n; j > i; j--){
			cout << " ";
		}
		for(int j = 0; j <= i; j++){
			cout << "*";
		}

		cout << endl;
	}

	return 0;
}