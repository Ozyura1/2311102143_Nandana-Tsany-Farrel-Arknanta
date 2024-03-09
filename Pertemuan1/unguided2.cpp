#include <iostream>
#include <string>

using namespace std;

// class Mahasiswa
class Mahasiswa {
  public:
    // atribut
    string nama;
    int umur_143;
    float ipk;

    // method
    void print() {
        cout << "Nama: " << nama << ", Umur: " << umur_143 << ", IPK: " << ipk << endl;
    }
};

// struct Mahasiswa
struct MahasiswaStruct {
    // atribut
    string nama;
    int umur_143;
    float ipk;
};

int main() {
    // membuat objek dari class Mahasiswa
    Mahasiswa mahasiswa1;
    mahasiswa1.nama = "Nandana_143";
    mahasiswa1.umur_143 = 20;
    mahasiswa1.ipk = 3.5;
    mahasiswa1.print();

    // membuat objek dari struct Mahasiswa
    MahasiswaStruct mahasiswa2;
    mahasiswa2.nama = "Farrel_143";
    mahasiswa2.umur_143 = 22;
    mahasiswa2.ipk = 3.7;
    cout << "Nama: " << mahasiswa2.nama << ", Umur: " << mahasiswa2.umur_143 << ", IPK: " << mahasiswa2.ipk << endl;

    return 0;
}
