
/* Dikoreksi oleh Muhammad Zidan Khalil Gibran - 230401070209 */

#include <iostream>
#include <string>

using namespace std;

// Deklarasi struct untuk data mahasiswa
struct Mahasiswa {
    string NIM;
    string NAMA;
    float NILAI_PEMROGRAMAN;
};

int main() {
    // Deklarasi array untuk menyimpan data mahasiswa
    Mahasiswa data_mahasiswa[10];

    // Membuat looping data untuk 10 mahasiswa
    for (int i = 0; i < 10; ++i) {
        cout << "Masukkan data untuk mahasiswa ke-" << i + 1 << endl;
        cout << "NIM: ";
        cin >> data_mahasiswa[i].NIM;
        cout << "Nama: ";
        cin.ignore(); // Untuk membersihkan newline dari buffer sebelumnya
        getline(cin, data_mahasiswa[i].NAMA);
        cout << "Nilai Pemrograman: ";
        cin >> data_mahasiswa[i].NILAI_PEMROGRAMAN;
        cout << endl;
    }

    // Menghitung nilai rata-rata dari 10 mahasiswa
    float total_nilai = 0;
    for (int i = 0; i < 10; ++i) {
        total_nilai += data_mahasiswa[i].NILAI_PEMROGRAMAN;
    }
    
    float rata2 = total_nilai / 10;

    // Menampilkan nilai rata-rata
    cout << "Nilai rata-rata dari semua mahasiswa: " << rata2 << endl;

    return 0;
}
