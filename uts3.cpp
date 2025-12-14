#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    char kodeSusu;
    int kodeUkuran;
    double hargaSatuan = 0;
    int jumlahBeli;
    double totalBayar;
    char ulang;
    string namaSusu;
    string namaUkuran;

    do {
        cout << "TOKO KELONTONG KERONCONGAN" << endl;
        cout << "--------------------------" << endl;
        cout << "A. Susu Dancow" << endl;
        cout << "   1. Ukuran Kecil" << endl;
        cout << "   2. Ukuran Sedang" << endl;
        cout << "   3. Ukuran Besar" << endl;
        cout << "B. Susu Bendera" << endl;
        cout << "   1. Ukuran Kecil" << endl;
        cout << "   2. Ukuran Sedang" << endl;
        cout << "   3. Ukuran Besar" << endl;
        cout << "C. Susu SGM" << endl;
        cout << "   1. Ukuran Kecil" << endl;
        cout << "   2. Ukuran Sedang" << endl;
        cout << "   3. Ukuran Besar" << endl;
        cout << endl;

        bool kodeSusuValid = false;
        while (kodeSusuValid == false) {
            cout << "Masukan Jenis Susu (A/B/C) : ";
            cin >> kodeSusu;

            if (kodeSusu == 'A' || kodeSusu == 'a') {
                kodeSusuValid = true;
                namaSusu = "Dancow";
            }
            else if (kodeSusu == 'B' || kodeSusu == 'b') {
                kodeSusuValid = true;
                namaSusu = "Bendera";
            }
            else if (kodeSusu == 'C' || kodeSusu == 'c') {
                kodeSusuValid = true;
                namaSusu = "SGM";
            }
            else {
                cout << "Kode susu tidak valid. Silakan input ulang." << endl;
            }
        }

        bool kodeUkuranValid = false;
        while (kodeUkuranValid == false) {
            cout << "Masukan Ukuran Kaleng (1/2/3) : ";
            cin >> kodeUkuran;

            if (kodeUkuran == 1) {
                kodeUkuranValid = true;
                namaUkuran = "Kecil";
            }
            else if (kodeUkuran == 2) {
                kodeUkuranValid = true;
                namaUkuran = "Sedang";
            }
            else if (kodeUkuran == 3) {
                kodeUkuranValid = true;
                namaUkuran = "Besar";
            }
            else {
                cout << "Kode ukuran tidak valid. Silakan input ulang." << endl;
            }
        }

        if (kodeSusu == 'A' || kodeSusu == 'a') {
            if (kodeUkuran == 1) {
                hargaSatuan = 15000;
            }
            if (kodeUkuran == 2) {
                hargaSatuan = 20000;
            }
            if (kodeUkuran == 3) {
                hargaSatuan = 25000;
            }
        }

        if (kodeSusu == 'B' || kodeSusu == 'b') {
            if (kodeUkuran == 1) {
                hargaSatuan = 13500;
            }
            if (kodeUkuran == 2) {
                hargaSatuan = 17500;
            }
            if (kodeUkuran == 3) {
                hargaSatuan = 20000;
            }
        }

        if (kodeSusu == 'C' || kodeSusu == 'c') {
            if (kodeUkuran == 1) {
                hargaSatuan = 15000;
            }
            if (kodeUkuran == 2) {
                hargaSatuan = 18500;
            }
            if (kodeUkuran == 3) {
                hargaSatuan = 22000;
            }
        }

        cout << fixed << setprecision(0);
        cout << "Harga Satuan Barang       Rp. " << hargaSatuan << endl;

        cout << "Jumlah Yang dibeli        : ";
        cin >> jumlahBeli;

        totalBayar = hargaSatuan * jumlahBeli;

        cout << endl;
        cout << "Harga Yang Harus dibayar" << endl;
        cout << "Sebesar Rp. " << totalBayar << endl;
        cout << endl;

        cout << "Ingin hitung transaksi lainnya (Y/N)? ";
        cin >> ulang;
        cout << endl;

    } while (ulang == 'Y' || ulang == 'y');

    return 0;
}
