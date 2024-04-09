#include <iostream>
#include <string>
#include <vector>
#include <cmath> // Untuk penggunaan fungsi pow
#include <limits> // Untuk membersihkan buffer

using namespace std;

// Struktur data mahasiswa
struct Mahasiswa {
    string nama;
    string nim_143;
    int nilai;
};

// Class HashTable
class HashTable {
private:
    static const int TABLE_SIZE = 100; // Ukuran tabel hash
    vector<vector<Mahasiswa>> table;   // Tabel hash sebagai vector of vector

    // Fungsi hash sederhana
    int hashFunc(const string& key) {
        int hash = 0;
        for (char c : key) {
            hash += c;
        }
        return hash % TABLE_SIZE;
    }

public:
    // Konstruktor, menginisialisasi tabel hash
    HashTable() {
        table.resize(TABLE_SIZE);
    }

    // Menambah data
    void insert(const Mahasiswa& mhs) {
        int index = hashFunc(mhs.nama);
        table[index].push_back(mhs);
        cout << "Data Mahasiswa dengan Nama " << mhs.nama << " berhasil ditambahkan." << endl;
    }

    // Menghapus data berdasarkan nama
    void remove(const string& nama) {
        int index = hashFunc(nama);
        bool found = false;
        for (auto it = table[index].begin(); it != table[index].end(); ++it) {
            if (it->nama == nama) {
                table[index].erase(it);
                cout << "Data Mahasiswa dengan nama " << nama << " berhasil dihapus." << endl;
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "Mahasiswa dengan Nama " << nama << " tidak ditemukan." << endl;
        }
    }

    // Cari data berdasarkan NIM
    void searchByNIM(const string& nim_143) {
        bool found = false;
        cout << "\nCARI DATA MAHASISWA (NIM)" << endl;
        for (const auto& bucket : table) {
            for (const auto& mhs : bucket) {
                if (mhs.nim_143 == nim_143) {
                    cout << "Nama: " << mhs.nama << ", NIM: " << mhs.nim_143 << ", Nilai: " << mhs.nilai << endl;
                    found = true;
                    break;
                }
            }
            if (found) break;
        }
        if (!found) {
            cout << "Mahasiswa dengan NIM " << nim_143 << " tidak ditemukan." << endl;
        }
    }

    // Mencari data berdasarkan rentang nilai
    void searchByRange(int minNilai, int maxNilai) {
        cout << "\nCARI DATA MAHASISWA (RENTANG NILAI)" << endl;
        bool found = false;
        for (const auto& bucket : table) {
            for (const auto& mhs : bucket) {
                if (mhs.nilai >= minNilai && mhs.nilai <= maxNilai) {
                    cout << "Nama: " << mhs.nama << ", NIM: " << mhs.nim_143 << ", Nilai: " << mhs.nilai << endl;
                    found = true;
                }
            }
        }
        if (!found) {
            cout << "Tidak ada data Mahasiswa dengan nilai antara " << minNilai << " dan " << maxNilai << "." << endl;
        }
    }

    // Menampilkan semua data
    void display() {
        cout << "\nDATA MAHASISWA" << endl;
        for (int i = 0; i < TABLE_SIZE; ++i) {
            for (const auto& mhs : table[i]) {
                cout << "Nama: " << mhs.nama << ", NIM: " << mhs.nim_143 << ", Nilai: " << mhs.nilai << endl;
            }
        }
    }
};

int main() {
    HashTable hashTable;
    int choice;
    do {
        cout << "\n++++MENU PILIHAN++++" << endl;
        cout << "--------------------------" << endl;
        cout << "--------------------------" << endl;
        cout << "1. Tambah data Mahasiswa" << endl;
        cout << "--------------------------" << endl;
        cout << "2. Hapus data Mahasiswa" << endl;
        cout << "--------------------------" << endl;
        cout << "3. Cari data Mahasiswa (NIM)" << endl;
        cout << "--------------------------" << endl;
        cout << "4. Cari data Mahasiswa (Rentang Nilai)" << endl;
        cout << "--------------------------" << endl;
        cout << "5. Tampilkan semua data" << endl;
        cout << "--------------------------" << endl;
        cout << "6. Keluar" << endl;
        cout << "--------------------------" << endl;
        cout << "--------------------------" << endl;
        cout << "Masukkan pilihan: ";
        cin >> choice;
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Membersihkan buffer

        switch (choice) {
            case 1: {
                Mahasiswa mhs;
                cout << "Masukkan nama: ";
                getline(cin, mhs.nama);
                cout << "Masukkan NIM: ";
                getline(cin, mhs.nim_143);
                cout << "Masukkan nilai: ";
                cin >> mhs.nilai;
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Membersihkan buffer setelah menerima input
                hashTable.insert(mhs);
                break;
            }
            case 2: {
                string nama;
                cout << "Masukkan nama yang ingin dihapus: ";
                getline(cin, nama);
                hashTable.remove(nama);
                break;
            }
            case 3: {
                string nim_143;
                cout << "Masukkan NIM yang ingin dicari: ";
                getline(cin, nim_143);
                hashTable.searchByNIM(nim_143);
                break;
            }
            case 4: {
                int minNilai, maxNilai;
                cout << "Masukkan nilai minimum: ";
                cin >> minNilai;
                cout << "Masukkan nilai maksimum: ";
                cin >> maxNilai;
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Membersihkan buffer setelah menerima input
                hashTable.searchByRange(minNilai, maxNilai);
                break;
            }
            case 5:
                hashTable.display();
                break;
            case 6:
                break;
            default:
                cout << "Pilihan tidak valid!" << endl;
        }
    } while (choice != 6);

    return 0;
}
