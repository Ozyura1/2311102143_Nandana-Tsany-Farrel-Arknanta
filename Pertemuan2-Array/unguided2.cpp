// Nandana Tsany Farrel Arkananta-2311102143-S1IF11D

#include <iostream>

using namespace std;

int main() {
  int x, y, z;

  // Input jumlah elemen di setiap dimensi
  cout << "Masukkan jumlah elemen di dimensi X: ";
  cin >> x;
  cout << "Masukkan jumlah elemen di dimensi Y: ";
  cin >> y;
  cout << "Masukkan jumlah elemen di dimensi Z: ";
  cin >> z;

  // Deklarasi array tiga dimensi
  int array_143[x][y][z];

  // Input nilai elemen array
  for (int i = 0; i < x; i++) {
    for (int j = 0; j < y; j++) {
      for (int k = 0; k < z; k++) {
        cout << "Masukkan nilai array[" << i << "][" << j << "][" << k << "]: ";
        cin >> array_143[i][j][k];
      }
    }
  }

  // Menampilkan elemen array
  cout << endl << "Elemen array:" << endl;
  for (int i = 0; i < x; i++) {
    for (int j = 0; j < y; j++) {
      for (int k = 0; k < z; k++) {
        cout << array_143[i][j][k] << " ";
      }
      cout << endl;
    }
    cout << endl;
  }

  return 0;
}