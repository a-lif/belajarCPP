#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cout << "masukkan nilai besar segitiga: ";
	cin >> n;

	cout << "\nSegitiga sama kaki horizontal\n\n";
	for (int i = 0; i < n; i++)
	{
		for (int j = n; j > i; j--)
		{
			cout << " ";
		}

		for (int j = 0; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}

	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << " ";
		}

		for (int j = n; j > i; j--)
		{
			cout << "*";
		}
		cout << endl;
	}

	cout << "\nSegitiga sama kaki vertikal menghadap atas\n\n";
	for (int i = 0; i < n; i++)
	{
		for (int j = n; j > i; j--)
		{
			cout << " ";
		}

		for (int j = 0; j <= (2*i); j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	cout << "\nSegitiga sama kaki vertikal menghadap bawah\n\n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << " ";
		}

		for (int j = (n*2-1); j > (i*2); j--)
		{
			cout << "*";
		}
		cout << endl;
	}

	cout << "\naslinya\n\n";
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < i; ++j)
		{
			cout << " ";
		}

		for (int j = n; j > ((2*i) - (n-1)); --j)
		{
			cout << "*";
		}
		cout << endl;
	}

	cout << "\nBelah Ketupat\n\n";
	for (int i = 0; i <= n; ++i)
	{
		for (int j = n; j > i; j--)
		{
			cout << " ";
		}

		for (int j = 0; j < (2*i-1); ++j)
		{
			cout << "*";
		}
		cout << endl;
	}
	for (int i = 1; i < n; ++i)
	{
		for (int j = 0; j < i; ++j)
		{
			cout << " ";
		}

		for (int j = (n-1); j > (2*i-n); --j)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}