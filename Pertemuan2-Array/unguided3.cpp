// Nandana Tsany Farrel Arkananta-2311102143-S1IF11D

#include <iostream>

using namespace std;

int main() {
  int n_143;

  // Input jumlah elemen array
  cout << "Masukkan jumlah elemen array: ";
  cin >> n_143;

  // Deklarasi array
  int arr[n_143];

  // Input nilai elemen array
  for (int i = 0; i < n_143; i++) {
    cout << "Masukkan nilai array[" << i << "]: ";
    cin >> arr[i];
  }

  // Mencari nilai maksimum
  int max = arr[0];
  for (int i = 1; i < n_143; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }

  // Mencari nilai minimum
  int min = arr[0];
  for (int i = 1; i < n_143; i++) {
    if (arr[i] < min) {
      min = arr[i];
    }
  }

  // Menghitung nilai rata-rata
  int sum = 0;
  for (int i = 0; i < n_143; i++) {
    sum += arr[i];
  }
  float avg = (float)sum / n_143;

  // Menampilkan hasil
  cout << endl << "Nilai maksimum: " << max << endl;
  cout << "Nilai minimum: " << min << endl;
  cout << "Nilai rata-rata: " << avg << endl;

  return 0;
}