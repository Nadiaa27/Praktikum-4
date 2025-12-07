#include <iostream>
#include <iomanip> 

using namespace std;
const int UKURAN = 4;

void tampilkanMatriks(int matriks[UKURAN][UKURAN], const string& nama) {
    cout << "Matriks " << nama << ":" << endl;
    for (int i = 0; i < UKURAN; i++) {
        for (int j = 0; j < UKURAN; j++) {
            cout << setw(4) << matriks[i][j];
        }
        cout << endl;
    }
    cout << endl;
}

int main() {
    cout << "Nama : Nadia Mecca Aurellia \n";
    cout << "NIM : 25104410092\n";
    cout << "Prodi : Teknik Informatika - 1B\n";
    cout << "===Tugas Praktikum 4===\n\n";
    cout << "=== Program Perkalian Matriks 4x4 ===" << endl;

    int matriksA[UKURAN][UKURAN] = {
        {2, 5, 3 ,1},
        {4, 8, 2, 2},
        {2, 1, 4, 7},
        {6, 2, 5, 4}
    };

    int matriksB[UKURAN][UKURAN] = {
        {3, 6, 2, 1},
        {2, 1, 3, 2},
        {1, 4, 3, 6},
        {2, 3, 2, 1}
    };

    int hasilMatriks[UKURAN][UKURAN];

    for (int i = 0; i < UKURAN; i++) {
        for (int j = 0; j < UKURAN; j++) {
            hasilMatriks[i][j] = 0;
        }
    }

    for (int i = 0; i < UKURAN; i++) {
        for (int j = 0; j < UKURAN; j++) {
            for (int k = 0; k < UKURAN; k++) {
                hasilMatriks[i][j] += matriksA[i][k] * matriksB[k][j];
            }
        }
    }

    tampilkanMatriks(matriksA, "A");
    tampilkanMatriks(matriksB, "B");

    cout << "=================\n";
    cout << "Matriks Hasil Perkalian (A x B):" << endl;
    tampilkanMatriks(hasilMatriks, "A x B");

    return 0;
}
