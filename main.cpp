#include <iostream>
using namespace std;

// Fungsi untuk mencetak matriks
void printMatrix(int matrix[][100], int baris, int kolom) {
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

// Fungsi untuk melakukan transpose matriks
void transposeMatrix(int matrix[][100], int transposed[][100], int baris, int kolom) {
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            transposed[j][i] = matrix[i][j];
        }
    }
}

int main() {
    int baris, kolom;
    int matrix[100][100], transposed[100][100];

    // Input ukuran matriks
    cout << "Masukkan jumlah baris matriks: ";
    cin >> baris;
    cout << "Masukkan jumlah kolom matriks: ";
    cin >> kolom;

    // Input elemen matriks
    cout << "Masukkan elemen matriks:\n";
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << "Elemen [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matrix[i][j];
        }
    }

    // Cetak matriks awal
    cout << "\nMatriks awal:\n";
    printMatrix(matrix, baris, kolom);

    // Transpose matriks
    transposeMatrix(matrix, transposed, baris, kolom);

    // Cetak matriks hasil transpose
    cout << "\nMatriks setelah transpose:\n";
    printMatrix(transposed, kolom, baris);

    return 0;
}
