# Algoritma Iteratif dan Rekursif untuk Matriks Transpose

## Table of Contents

- [Introduction](#introduction)
- [Matriks Transpose](#matriks-transpose)
- [Code Explanation](#code-explanation)
- [Contributor](#contributor)

---

## Introduction

Proyek ini berisi implementasi algoritma iteratif dan rekursif untuk melakukan transpose matriks menggunakan bahasa C++. Algoritma ini dirancang untuk mengubah baris menjadi kolom dan sebaliknya pada matriks persegi maupun persegi panjang.

Proyek ini cocok untuk Anda yang ingin mempelajari:
- Manipulasi matriks dalam C++.
- Perbedaan antara pendekatan iteratif dan rekursif.
- Dasar-dasar algoritma rekursif dalam pemrograman.

---

## Matriks Transpose

Transpose matriks adalah operasi yang menukar elemen matriks di posisi `[i][j]` menjadi `[j][i]`. Misalnya:

### Contoh Matriks Awal:
```
1 2 3
4 5 6
```

### Matriks Setelah Transpose:
```
1 4
2 5
3 6
```

Proyek ini menyertakan dua metode utama:
1. **Iteratif**: Menggunakan dua perulangan `for` untuk menukar elemen matriks.
2. **Rekursif**: Menggunakan fungsi rekursif untuk melakukan hal yang sama secara berulang hingga seluruh elemen selesai.

---

## Code Explanation

### Iteratif:
Pendekatan iteratif memanfaatkan perulangan `for` untuk melintasi elemen matriks. Berikut langkah-langkahnya:
1. Gunakan dua indeks, satu untuk baris (`i`) dan satu untuk kolom (`j`).
2. Tukar elemen `[i][j]` dengan `[j][i]` untuk seluruh elemen di atas diagonal utama.

### Rekursif:
Pendekatan rekursif memanfaatkan fungsi yang memanggil dirinya sendiri:
1. Fungsi memproses elemen `[i][j]` hingga kondisi dasar (base case) tercapai.
2. Pindah ke elemen berikutnya secara horizontal, kemudian vertikal.
3. Tukar elemen `[i][j]` dengan `[j][i]` untuk seluruh elemen di atas diagonal utama.

---

## Contributor

- **Ardiansyah**
- **Abiyoso**
