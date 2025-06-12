// Commit: Menampilkan isi array string ke layar

#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama[5];

    nama[0] = "Andi";
    nama[1] = "Budi";
    nama[2] = "Citra";
    nama[3] = "Dewi";
    nama[4] = "Eko";

    // Menampilkan isi array
    cout << "Daftar Nama:\n";
    for (int i = 0; i < 5; i++) {
        cout << i + 1 << ". " << nama[i] << endl;
    }

    return 0;
}
