#include <iostream>
#include <string>

using namespace std;

// Fungsi untuk mencari huruf dalam kalimat dengan Binary Search
bool binarySearch(string kalimat_143, char hurufDicari_143) {
  // Inisialisasi indeks awal dan akhir
  int low_143 = 0;
  int high_143 = kalimat_143.length() - 1;

  // Looping selama indeks awal lebih kecil dari atau sama dengan indeks akhir
  while (low_143 <= high_143) {
    // Hitung indeks tengah
    int mid = (low_143 + high_143) / 2;

    // Periksa apakah huruf di indeks tengah sama dengan huruf yang dicari
    if (kalimat_143[mid] == hurufDicari_143) {
      // Huruf ditemukan, kembalikan true
      return true;
    } else if (kalimat_143[mid] < hurufDicari_143) {
      // Huruf yang dicari lebih besar, perbarui indeks awal
      low_143 = mid + 1;
    } else {
      // Huruf yang dicari lebih kecil, perbarui indeks akhir
      high_143 = mid - 1;
    }
  }

  // Huruf tidak ditemukan, kembalikan false
  return false;
}

int main() {
  // Deklarasi variabel untuk kalimat dan huruf yang dicari
  string kalimat_143;
  char hurufDicari_143;

  // Minta input kalimat dari pengguna
  cout << "Masukkan kalimat: ";
  getline(cin, kalimat_143);

  // Minta input huruf yang dicari dari pengguna
  cout << "Masukkan huruf yang ingin dicari: ";
  cin >> hurufDicari_143;

  // Panggil fungsi binarySearch untuk mencari huruf
  bool ditemukan = binarySearch(kalimat_143, hurufDicari_143);

  // Tampilkan pesan berdasarkan hasil pencarian
  if (ditemukan) {
    cout << "Huruf '" << hurufDicari_143 << "' ditemukan dalam kalimat." << endl;
  } else {
    cout << "Huruf '" << hurufDicari_143 << "' tidak ditemukan dalam kalimat." << endl;
  }

  return 0;
}