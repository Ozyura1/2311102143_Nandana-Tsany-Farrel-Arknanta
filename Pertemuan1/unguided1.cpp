#include <iostream>

using namespace std;

// Fungsi untuk menghitung jumlah dua bilangan
int hitungJumlah(int num1_143, int num2_143) {
  return num1_143 + num2_143;
}

// Fungsi untuk menghitung selisih dua bilangan
int hitungSelisih(int num1_143, int num2_143) {
  return num1_143 - num2_143;
}

int main() {
  int num1_143, num2_143, pilihan;

  while (true) {
    cout << "\nKalkulator Sederhana Farrel\n";
    cout << "===================\n";
    cout << "1. Hitung Jumlah\n";
    cout << "2. Hitung Selisih\n";
    cout << "3. Keluar\n";
    cout << "Pilihan Anda: ";
    cin >> pilihan;

    switch (pilihan) {
      case 1:
        cout << "Masukkan dua bilangan: ";
        cin >> num1_143 >> num2_143;
        cout << "Jumlah: " << hitungJumlah(num1_143, num2_143) << std::endl;
        break;
      case 2:
        cout << "Masukkan dua bilangan: ";
        cin >> num1_143 >> num2_143;
        cout << "Selisih: " << hitungSelisih(num1_143, num2_143) << std::endl;
        break;
      case 3:
        return 0;
      default:
        cout << "Pilihan tidak valid. Silakan coba lagi." << std::endl;
    }
  }

  return 0;
}
