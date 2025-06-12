// Commit: Menjadikan jumlah nama sebagai input dari pengguna

#include <iostream>
#include <string>
using namespace std;

int main() {
    int jumlah;

    // Meminta jumlah nama yang ingin dimasukkan
    cout << "Masukkan jumlah nama yang ingin diproses (maks 100): ";
    cin >> jumlah;

    // Validasi jumlah
    if (jumlah <= 0 || jumlah > 100) {
        cout << "Jumlah tidak valid.\n";
        return 1;
    }

    string nama[100]; // Array diperbesar agar dinamis

    // Input nama-nama
    cin.ignore(); // Menghindari bug input
    for (int i = 0; i < jumlah; i++) {
        cout << "Nama ke-" << i + 1 << ": ";
        getline(cin, nama[i]); // Memungkinkan nama dengan spasi
    }

    // Menampilkan daftar nama
    cout << "\nDaftar Nama:\n";
    for (int i = 0; i < jumlah; i++) {
        cout << i + 1 << ". " << nama[i] << endl;
    }

    return 0;
}
