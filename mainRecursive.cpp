#include <iostream>
using namespace std;

void printMatrix(int matrix[][250], int baris, int kolom) {
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

// Fungsi untuk melakukan transpose matriks
void transposeMatrix(int matrix[][250], int transposed[][250], int baris, int kolom) {
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            transposed[j][i] = matrix[i][j];
        }
    }
}

int main() {
    int baris, kolom;
    int matrix[250][250], transposed[250][250];

    cout << "Masukkan jumlah baris matriks: ";
    cin >> baris;
    cout << "Masukkan jumlah kolom matriks: ";
    cin >> kolom;

    cout << "Masukkan elemen matriks:\n";
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << "Elemen [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matrix[i][j];
        }
    }

    cout << "\nMatriks awal:\n";
    printMatrix(matrix, baris, kolom);

    transposeMatrix(matrix, transposed, baris, kolom);

    cout << "\nMatriks setelah transpose:\n";
    printMatrix(transposed, kolom, baris);

    return 0;
}
