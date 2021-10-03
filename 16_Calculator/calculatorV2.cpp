#include <iostream>
using namespace std;

int main()
{
	float a,b,hasil;
	char aritmatika;

	cout << "Selamat datang di program kalkulator saya \n\n";
	cout << "masukkan nilai pertama = ";
	cin >> a;
	cout << "pilih operator anda: +,-,*,/ = ";
	cin >> aritmatika;
	cout << "masukkan nilai kedua = ";
	cin >> b;

	switch (aritmatika){
		case '+':
			hasil = a + b;
			cout << "\nhasilnya adalah = " << hasil << endl;
				break;
		case '-':
			hasil = a - b;
			cout << "\nhasilnya adalah = " << hasil << endl;
				break;
		case '*':
			hasil = a * b;
			cout << "\nhasilnya adalah = " << hasil << endl;
				break;
		case '/':
			hasil = a / b;
			cout << "\nhasilnya adalah = " << hasil << endl;
				break;
		default:
			cout << "\nOperator yang anda masukkan salah\n";
	}

	return 0;
}