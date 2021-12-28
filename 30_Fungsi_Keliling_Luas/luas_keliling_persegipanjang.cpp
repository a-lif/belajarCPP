#include <iostream>
using namespace std;

double luas(double p, double l){
    double hasil;
    hasil = p * l;
    return hasil;
}

double keliling(double p, double l){
    double hasil;
    hasil = 2 * ( p + l );
    return hasil;
}

void hasil_luas(double p, double l){
    cout << "Luasnyanya adalah: " << luas(p,l) << endl;
}

void hasil_keliling(double p, double l){
    cout << "Kelilingnya adalah: " << keliling(p,l) << endl;
}

int main()
{
    double panjang, lebar;
    cout << "Masukkan Panjang: ";
    cin >> panjang;
    
    cout << "Masukkan Lebar: ";
    cin >> lebar;

    hasil_luas(panjang, lebar);
    hasil_keliling(panjang, lebar);

    return 0;
}
