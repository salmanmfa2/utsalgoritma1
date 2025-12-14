#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    string nama;
    int golongan;
    string pendidikan;
    int jamKerja;
    double honorTetap = 3500000;
    double tunjanganJabatan;
    double tunjanganPendidikan;
    double honorLembur;
    double totalHonor;
    char ulang;

    do {
        cout << "Program Hitung Honor Karyawan Kontrak PT. DINGIN DAMAI" << endl;
        cout << "Nama Karyawan             : ";
        cin >> nama;

        bool cekGolongan = false;
        while (cekGolongan == false) {
            cout << "Golongan (1/2/3)          : ";
            cin >> golongan;

            if (golongan == 1) {
                cekGolongan = true;
            }
            else if (golongan == 2) {
                cekGolongan = true;
            }
            else if (golongan == 3) {
                cekGolongan = true;
            }
            else {
                cout << "Golongan salah. Silakan input ulang." << endl;
            }
        }

        bool cekPendidikan = false;
        while (cekPendidikan == false) {
            cout << "Pendidikan (SMU/D3/S1)    : ";
            cin >> pendidikan;

            if (pendidikan == "SMU") {
                cekPendidikan = true;
            }
            else if (pendidikan == "D3") {
                cekPendidikan = true;
            }
            else if (pendidikan == "S1") {
                cekPendidikan = true;
            }
            else {
                cout << "Pendidikan salah. Silakan input ulang." << endl;
            }
        }

        cout << "Jumlah Jam Kerja          : ";
        cin >> jamKerja;

        if (golongan == 1) {
            tunjanganJabatan = 3500000 * 0.05;
        }
        if (golongan == 2) {
            tunjanganJabatan = 3500000 * 0.10;
        }
        if (golongan == 3) {
            tunjanganJabatan = 3500000 * 0.15;
        }

        if (pendidikan == "SMU") {
            tunjanganPendidikan = 3500000 * 0.025;
        }
        if (pendidikan == "D3") {
            tunjanganPendidikan = 3500000 * 0.05;
        }
        if (pendidikan == "S1") {
            tunjanganPendidikan = 3500000 * 0.075;
        }

        if (jamKerja > 8) {
            honorLembur = (jamKerja - 8) * 12500;
        }
        else {
            honorLembur = 0;
        }

        totalHonor = honorTetap + tunjanganJabatan + tunjanganPendidikan + honorLembur;

        cout << endl;
        cout << "Karyawan yang bernama     : " << nama << endl;
        cout << endl;
        cout << "Honor yang diterima" << endl;
        cout << fixed << setprecision(0);
        cout << "Honor Tetap               Rp. " << honorTetap << endl;
        cout << "Tunjangan Jabatan         Rp. " << tunjanganJabatan << endl;
        cout << "Tunjangan Pendidikan      Rp. " << tunjanganPendidikan << endl;
        cout << "Honor Lembur              Rp. " << honorLembur << endl;
        cout << "                        ----------------------+" << endl;
        cout << "Honor Yang Diterima       Rp. " << totalHonor << endl;
        cout << endl;
        cout << "Hitung ulang Honor Karyawan Lainnya (Y/N)? ";
        cin >> ulang;
        cout << endl;

    } while (ulang == 'Y' || ulang == 'y');

    return 0;
}
