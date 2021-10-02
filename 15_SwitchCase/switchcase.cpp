#include <iostream>
using namespace std;

int main()
{
	int a;

	cout << "masukkan sebuah nilai = ";
	cin >> a;

	switch(a){
		case 1:
			cout << "ini adalah angka satu" << endl;
				break;
		case 2:
			cout << "ini adalah angka dua" << endl;
		case 3:
			cout << "ini adalah angka tiga" << endl;
		case 4:
			cout << "ini adalah angka empat" << endl;
		case 5:
			cout << "ini adalah angka lima" << endl;
		default:
			cout << "default";
	}

	cout << "ini adalah akhir program" << endl;

	return 0;
}