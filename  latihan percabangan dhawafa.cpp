#include <iostream>
using namespace std;

int main()
{
    string nama;
    float nilai1, nilai2, nilai3, rata;

    cout << "Nama Siswa: ";
    cin >> nama;

    cout << "Nilai Pertandingan I: ";
    cin >> nilai1;

    cout << "Nilai Pertandingan II: ";
    cin >> nilai2;

    cout << "Nilai Pertandingan III: ";
    cin >> nilai3;

    // menghitung nilai rata-rata
    rata = (nilai1 + nilai2 + nilai3) / 3;

    // menentukan hadiah
    if (rata >= 85) {
        cout << "Hadiah: Seperangkat Mobil" << endl;
    }
    else if (rata >= 70) {
        cout << "Hadiah: Uang Rp. 500000" << endl;
    }
    else {
        cout << "Hadiah: Hiburan" << endl;
    }

    cout << "========================" << endl;
    cout << "Nama Siswa: " << nama << endl;
    cout << "Nilai Rata-rata: " << rata << endl;

    return 0;
}

