/* 
Nama : Nadine Ester Rajagukguk
Kelas : C 
Tugas Praktikum Algoritma dan Pemrograman
*/

#include <iostream>
using namespace std;
int main() {
    // input
    int Belanja;

    cout << "=== Kalkulator Kasir Toko Buku ===" << endl;
    cout << "Masukkan Total Belanja (Rp): "; cin >> Belanja;
    cout << endl;

    cout << "=== Ringkasan Pembayaran ===" << endl;
    int HargaDiskon, TotalBayar;
    float Diskon = 0;

    if (Belanja < 100000) {
        Diskon = 0;
    } else if (Belanja > 100000 && Belanja < 299999) {
        Diskon = 0.1;
    } else {
        Diskon = 0.2;
       }

       // proses 
    HargaDiskon = Belanja * Diskon;
    TotalBayar = Belanja - HargaDiskon;
    cout << "Diskon (" << Diskon * 100 << "%): Rp" << HargaDiskon << endl;
    cout << "Total Bayar: Rp" << TotalBayar;

    return 0;
}