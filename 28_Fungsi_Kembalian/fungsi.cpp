#include <iostream>
using namespace std;

int kuadrat(int w){
	int e;
	e = w * w;
	return e;
}

int tambah(int r, int t){
	int y;
	y = r + t;
	return y;
}

int main(int argc, char const *argv[])
{
	int q, u ,i ,hasil1, hasil2;
	cout << "kuadrat dari: ";
	cin >> q;

	hasil1 = kuadrat(q);
	cout << hasil1 << endl;

	cout << "Masukkan nilai a dan b yang akan ditambahkan: \n";
	cin >> u;
	cin >> i;

	hasil2 = tambah(u,i);
	cout << hasil2 << endl;
	return 0;
}