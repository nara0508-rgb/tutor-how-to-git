#include <iostream>
using namespace std;

int main() {
    cout << "=== VENDING MACHINE AUTOPAT ===" << endl;
    cout << "Pilihan Minuman:" << endl;
    cout << "1. Air Mineral (Rp4000)" << endl;
    cout << "2. Teh Botol (Rp6000)" << endl;
    cout << "3. Kopi Susu (Rp10000)" << endl;
    
    //input
    int Machine, Kode, Uang;
    int AirMineral, TehBotol, KopiSusu;
    int Hasil;
    cout << "Pilih Kode Elemen (1-3): "; cin >> Kode;
    cout << "Masukkan Uang Anda (Rp): "; cin >> Uang;

   if (Kode >= 1 && Kode <= 3) {
    switch (Kode) {
        case 1:
            AirMineral = 4000;
            Hasil = Uang - AirMineral;
            break;
        case 2:
            TehBotol = 6000;
            Hasil = Uang - TehBotol;
            break; 
        case 3:
            KopiSusu = 10000; 
            Hasil = Uang - KopiSusu;
            break;
    } } else {
        cout << "Error" << endl;
        Hasil = 0;
    } 

cout << "=== Detail Transaksi ===" << endl;
int Kembalian5, Kembalian1;
Kembalian5 = (Hasil / 5000) / 1000;
Kembalian1 = (Hasil % 5000) / 1000;

 if (Hasil >= 0 && (Kode >= 1 && Kode <=3)) {
    cout << "Transaksi Berhasil! "; 
    cout << "Kembalian Uang Anda " << Kembalian5 << " lembar Rp5000";
    cout << " dan " << Kembalian1 << " lembar Rp1000" << endl;
    } else if (Hasil < 0 && (Kode >= 1 && Kode <=3)){
    cout << "Transaksi Gagal! ";
    cout << "Uang Anda kurang Rp" << -Hasil << endl;
    } else {
        cout << "Transaksi Gagal!";
    }
   return 0;
}
   