#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	while(true){
		char lanjut;
		cout << "Lempat Dadu? (y/n): ";
		cin >> lanjut;

		if (lanjut == 'y')
		{
			cout << (1+ rand() % 6) << endl;
		}else if (lanjut == 'n')
		{
			break;
		}else{
			cout << "masukkan y atau n !!!\n";
		}
	}


	return 0;
}