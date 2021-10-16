#include <iostream>
using namespace std;

int kuadrat(int q){
	int w;
	w = q * q;
	return w;
}

void tampilkan(int input){
	cout << input << endl;
}

int main(int argc, char const *argv[])
{	
	int r, hasil;
	cout << "kuadrat dari: ";
	cin >> r;

	hasil = kuadrat(r);
	tampilkan(hasil);

	return 0;
}