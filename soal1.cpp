#include <iostream>
using namespace std;

int main() {
    double harga, diskon, jumlahdiskon, hargasetelahdiskon;

    cout << "\nSelamat Datang di Toko Unisba Blitar" << endl;
    cout << "=======================================" << endl;
    cout << "\nSilahkan Masukkan :";

    cout << "\nHarga barang (Rp) = ";
    cin >> harga;

    cout << "Diskon barang (%) = ";
    cin >> diskon;

    jumlahdiskon = harga * (diskon / 100);
    hargasetelahdiskon = harga - jumlahdiskon;

    cout << "\nHasil :" << endl;
    cout << "Jumlah diskon = Rp " << jumlahdiskon << endl;
    cout << "Harga setelah diskon = Rp " << hargasetelahdiskon << endl;
    return 0;
}