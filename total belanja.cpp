#include <iostream>
using namespace std;

int main() {
    // Input belanjaan
    double bayam, ketumbar, garam, gula, kol;

    cout << "Masukkan jumlah ikat bayam: ";
    cin >> bayam;
    int total_bayam = bayam * 5000;
    cout << "Masukkan jumlah biji ketumbar: ";
    cin >> ketumbar;
    int total_ketumbar = ketumbar * 1000;

    cout << "Masukkan berat garam (kg): ";
    cin >> garam;
    int total_garam = garam * 10000;

    cout << "Masukkan berat gula (gram): ";
    cin >> gula;
    int total_gula = gula * 12500;

    cout << "Masukkan jumlah buah kol: ";
    cin >> kol;
    int total_kol = kol * 1000;

    // Menghitung total belanjaan
    int total_belanjaan = total_bayam + total_ketumbar + total_garam + total_gula + total_kol;

    // Output total belanjaan
    cout << "Total belanjaan Nano adalah: " << total_belanjaan << " ribu rupiah." << endl;

    return 0;
}

