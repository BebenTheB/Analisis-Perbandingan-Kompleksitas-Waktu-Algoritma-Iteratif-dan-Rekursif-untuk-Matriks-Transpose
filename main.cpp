#include <iostream>
using namespace std;

const int MAX_BARIS = 100;
const int MAX_KOLOM = 100;

void transposeRekursif(int A[][MAX_KOLOM], int B[][MAX_BARIS], int baris, int kolom, int i, int j) {
    if (i >= baris) {
        return; // Base Case = selesai memproses semua baris
    }
    else if (j + 1 < kolom) {
        B[j][i] = A[i][j];
        transposeRekursif(A, B, baris, kolom, i, j + 1); // Pindah ke kolom berikutnya
    }
    else {
        B[j][i] = A[i][j];
        transposeRekursif(A, B, baris, kolom, i + 1, 0); // Pindah ke baris berikutnya dan reset saat kolom ke 0
    }
}

int main() {
    int baris, kolom;
    int A[MAX_BARIS][MAX_KOLOM];
    int B[MAX_KOLOM][MAX_BARIS];

    cout << "Masukkan jumlah baris: ";
    cin >> baris;
    cout << "Masukkan jumlah kolom: ";
    cin >> kolom;

    cout << "Masukkan elemen matriks A:\n";
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cin >> A[i][j];
        }
    }

    transposeRekursif(A, B, baris, kolom, 0, 0);

    cout << "Matriks Transpose:\n";
    for (int i = 0; i < kolom; i++) {
        for (int j = 0; j < baris; j++) {
            cout << B[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
