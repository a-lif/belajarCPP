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

	if (aritmatika == '+'){
		hasil = a + b;
		cout << "\nhasilnya adalah = " << hasil << endl;
	} else if (aritmatika == '-'){
		hasil = a - b;
		cout << "\nhasilnya adalah = " << hasil << endl;
	} else if (aritmatika == '*'){
		hasil = a * b;
		cout << "\nhasilnya adalah = " << hasil << endl;
	} else if (aritmatika == '/'){
		hasil = a / b;
		cout << "\nhasilnya adalah = " << hasil << endl;
	} else {
		cout << "operator anda salah\n";
	}

	cout << "\nTerimakasih sudah menggunakan program kami" << endl << endl;
	return 0;
}