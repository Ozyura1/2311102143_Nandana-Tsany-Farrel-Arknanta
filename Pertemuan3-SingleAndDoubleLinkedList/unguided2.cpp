// Nandana Tsany Farrel Arkananta_2311102143_S1IF11D

#include <iostream>
#include <iomanip> 
using namespace std;

// Deklarasi Struct Node
class Node {
public:
    string produk_143;
    int harga_143;
    Node* prev_143;
    Node* next_143;
};

// Deklarasi Class DoublyLinkedList
class DoublyLinkedList {
public:
    Node* head_143;
    Node* tail_143;

    // Constructor
    DoublyLinkedList() {
        head_143 = nullptr;
        tail_143 = nullptr;
    }

    // Prosedur untuk menambahkan data di depan
    void Push(int harga_143, string produk_143) {
        Node* newNode_143 = new Node;
        newNode_143->harga_143 = harga_143;
        newNode_143->produk_143 = produk_143;
        newNode_143->prev_143 = nullptr;
        newNode_143->next_143 = head_143;

        if (head_143 != nullptr) {
            head_143->prev_143 = newNode_143;
        }
        else {
            tail_143 = newNode_143;
        }

        head_143 = newNode_143;
    }

    // Prosedur untuk menambahkan data pada posisi tertentu
    void PushPosition(int posisi_143, int harga_143, string produk_143) {
        if (posisi_143 < 1) {
            cout << "Posisi tidak valid!" << endl;
            return;
        }

        Node* newNode_143 = new Node;
        newNode_143->harga_143 = harga_143;
        newNode_143->produk_143 = produk_143;
        newNode_143->prev_143 = nullptr;
        newNode_143->next_143 = nullptr;

        if (posisi_143 == 1) {
            newNode_143->next_143 = head_143;
            if (head_143 != nullptr)
                head_143->prev_143 = newNode_143;
            else
                tail_143 = newNode_143;
            head_143 = newNode_143;
            return;
        }

        Node* saatIni_143 = head_143;
        for (int i = 1; i < posisi_143 - 1 && saatIni_143 != nullptr; ++i)
            saatIni_143 = saatIni_143->next_143;

        if (saatIni_143 == nullptr) {
            cout << "Posisi tidak valid!" << endl;
            delete newNode_143;
            return;
        }

        newNode_143->next_143 = saatIni_143->next_143;
        newNode_143->prev_143 = saatIni_143;
        if (saatIni_143->next_143 != nullptr)
            saatIni_143->next_143->prev_143 = newNode_143;
        else
            tail_143 = newNode_143;
        saatIni_143->next_143 = newNode_143;
    }

    // Prosedur untuk menghapus data di depan
    void Pop() {
        if (head_143 == nullptr) {
            cout << "Tidak ada data yang bisa dihapus!" << endl;
            return;
        }

        Node* temp_143 = head_143;
        head_143 = head_143->next_143;

        if (head_143 != nullptr) {
            head_143->prev_143 = nullptr;
        }
        else {
            tail_143 = nullptr;
        }

        delete temp_143;
    }

    // Prosedur untuk menghapus data pada posisi tertentu
    void PopPosition(int posisi_143) {
        if (head_143 == nullptr) {
            cout << "Tidak ada data yang bisa dihapus!" << endl;
            return;
        }

        Node* temp_143 = head_143;
        for (int i = 1; i < posisi_143 && temp_143 != nullptr; ++i) {
            temp_143 = temp_143->next_143;
        }

        if (temp_143 == nullptr) {
            cout << "Posisi tidak valid!" << endl;
            return;
        }

        if (temp_143->prev_143 != nullptr) {
            temp_143->prev_143->next_143 = temp_143->next_143;
        } else {
            head_143 = temp_143->next_143;
        }

        if (temp_143->next_143 != nullptr) {
            temp_143->next_143->prev_143 = temp_143->prev_143;
        } else {
            tail_143 = temp_143->prev_143;
        }

        delete temp_143;
    }

    // Fungsi untuk mengupdate data
    bool Update(string oldProduk_143, string newProduk_143, int newharga_143) {
        Node* saatIni_143 = head_143;

        while (saatIni_143 != nullptr) {
            if (saatIni_143->produk_143 == oldProduk_143) {
                saatIni_143->produk_143 = newProduk_143;
                saatIni_143->harga_143 = newharga_143;
                return true;
            }
            saatIni_143 = saatIni_143->next_143;
        }

        return false;
    }

    // Prosedur untuk menghapus semua data
    void DeleteAll() {
        Node* saatIni_143 = head_143;

        while (saatIni_143 != nullptr) {
            Node* temp_143 = saatIni_143;
            saatIni_143 = saatIni_143->next_143;
            delete temp_143;
        }

        head_143 = nullptr;
        tail_143 = nullptr;
    }

    // Prosedur untuk menampilkan data
    void Display_143() {
        Node* saatIni_143 = head_143;

        cout << left << setw(20) << "[ Nama Produk ]" << setw(10) << "[ Harga ]" << endl;

        while (saatIni_143 != nullptr) {
            cout << setw(20) << saatIni_143->produk_143 << setw(10) << saatIni_143->harga_143 << endl;
            saatIni_143 = saatIni_143->next_143;
        }

        cout << endl;
    }
};

int main() {
    DoublyLinkedList list;

    cout << "\n== MENU TOKO SKINCARE PURWOKERTO FARREL ==" << endl;

    // Inisialisasi data awal
    list.Push(30000, "Hanasui");
    list.Push(50000, "Wardah");
    list.Push(100000, "Skintific");
    list.Push(150000, "Somethinc");
    list.Push(60000, "Originote");
    list.Display_143(); 

    // Loop untuk menu interaktif
    while (true) {
        cout << "\nToko Skincare Purwokerto" << endl;
        cout << "   1. Tambah Data" << endl;
        cout << "   2. Hapus Data" << endl;
        cout << "   3. Update Data" << endl;
        cout << "   4. Tambah Data pada Posisi Tertentu" << endl;
        cout << "   5. Hapus Data pada Posisi Tertentu" << endl;
        cout << "   6. Hapus Semua Data" << endl;
        cout << "   7. Tampilkan Data" << endl;
        cout << "   8. Exit" << endl;

        int pilihan_143;
        cout << "Pilih Nomor: ";
        cin >> pilihan_143;

        switch (pilihan_143) {
            case 1: {
                int harga_143;
                string produk_143;

                cout << "\nTAMBAH PRODUK SKINCARE" << endl;
                cout << "Nama produk: ";
                cin.ignore();
                getline(cin, produk_143);
                cout << "Harga produk: ";
                cin >> harga_143;
                list.Push(harga_143, produk_143);
                cout << "Produk berhasil ditambahkan!" << endl;
                list.Display_143(); 
                break;
            }

            case 2: {
                list.Pop();
                cout << "PRODUK PALING ATAS BERHASIL DIHAPUS!" << endl;
                list.Display_143(); 
                break;
            }

            case 3: {
                string oldProduk_143, newProduk_143;
                int newharga_143;

                cout << "\nUPDATE DATA PRODUK SKINCARE" << endl;
                cout << "Masukkan nama produk yang ingin diubah: ";
                cin.ignore();
                getline(cin, oldProduk_143);
                cout << "Masukkan nama produk baru: ";
                getline(cin, newProduk_143);
                cout << "Masukkan harga baru: ";
                cin >> newharga_143;

                bool update_143 = list.Update(oldProduk_143, newProduk_143, newharga_143);
                if (update_143) {
                    cout << "Data berhasil diperbarui!" << endl;
                } else {
                    cout << "Data tidak ditemukan!" << endl;
                }
                list.Display_143(); 
                break;
            }

            case 4: {
                int posisi_143, harga_143;
                string produk_143;

                cout << "\nTAMBAH PRODUK SKINCARE PADA POSISI TERTENTU" << endl;
                cout << "Masukkan posisi untuk produk baru: ";
                cin >> posisi_143;
                cout << "Nama produk: ";
                cin.ignore();
                getline(cin, produk_143);
                cout << "Harga produk: ";
                cin >> harga_143;
                list.PushPosition(posisi_143, harga_143, produk_143);
                cout << "Produk berhasil ditambahkan pada posisi ke-" << posisi_143 << "!" << endl;
                list.Display_143(); 
                break;
            }

            case 5: {
                int posisi_143;

                cout << "\nHAPUS PRODUK SKINCARE PADA POSISI TERTENTU" << endl;
                cout << "Masukkan posisi untuk menghapus data: ";
                cin >> posisi_143;
                list.PopPosition(posisi_143);
                cout << "Data berhasil dihapus pada posisi ke-" << posisi_143 << "!" << endl;
                list.Display_143(); 
                break;
            }

            case 6: {
                list.DeleteAll();
                cout << "SEMUA DATA BERHASIL DI HAPUS!" << endl;
                list.Display_143(); 
                break;
            }

            case 7: {
                cout << "\nTAMPILAN DATA PRODUK TOKO SKINCARE PURWOKERTO SEKARANG" << endl;
                list.Display_143(); 
                break;
            }

            case 8: {
                cout << "Terimakasih telah menggunakan program ini!" << endl;
                return 0;
            }

            default: {
                cout << "Pilihan anda tidak valid!" << endl;
                break;
            }
        }
    }

    return 0;
}