// Nandana Tsany Farrel Arkananta_2311102143_S1IF11D

#include <iostream>
using namespace std;

struct Node {
    string nama_143;
    int usia_143nama_143;
    Node* next_143nama_143;
};

Node* head_143nama_143 = nullptr;

void tampilkanList_143nama_143() {
    cout << "[ Nama ]" << "\t" << "[ Usia ]" << endl;
    Node* saatIni_143nama_143 = head_143nama_143;
    while (saatIni_143nama_143 != nullptr) {
        cout << saatIni_143nama_143->nama_143 << "\t\t" << saatIni_143nama_143->usia_143nama_143 << endl;
        saatIni_143nama_143 = saatIni_143nama_143->next_143nama_143;
    }
}

void insertDepan_143nama_143(string nama_143, int usia_143nama_143) {
    Node* baru_143nama_143 = new Node;
    baru_143nama_143->nama_143 = nama_143;
    baru_143nama_143->usia_143nama_143 = usia_143nama_143;
    baru_143nama_143->next_143nama_143 = head_143nama_143;
    head_143nama_143 = baru_143nama_143;
}

void insertBelakang_143nama_143(string nama_143, int usia_143nama_143) {
    Node* baru_143nama_143 = new Node;
    baru_143nama_143->nama_143 = nama_143;
    baru_143nama_143->usia_143nama_143 = usia_143nama_143;
    baru_143nama_143->next_143nama_143 = nullptr;
    if (head_143nama_143 == nullptr) {
        head_143nama_143 = baru_143nama_143;
    }
    else {
        Node* temp_143nama_143 = head_143nama_143;
        while (temp_143nama_143->next_143nama_143 != nullptr) {
            temp_143nama_143 = temp_143nama_143->next_143nama_143;
        }
        temp_143nama_143->next_143nama_143 = baru_143nama_143;
    }
}

void insertTengah_143nama_143(string nama_143, int usia_143nama_143, int posisi_143nama_143) {
    Node* baru_143nama_143 = new Node;
    baru_143nama_143->nama_143 = nama_143;
    baru_143nama_143->usia_143nama_143 = usia_143nama_143;
    Node* bantu_143nama_143 = head_143nama_143;
    for (int i_143nama_143 = 1; i_143nama_143 < posisi_143nama_143 - 1; i_143nama_143++) {
        if (bantu_143nama_143 != nullptr) {
            bantu_143nama_143 = bantu_143nama_143->next_143nama_143;
        }
    }
    if (bantu_143nama_143 != nullptr) {
        baru_143nama_143->next_143nama_143 = bantu_143nama_143->next_143nama_143;
        bantu_143nama_143->next_143nama_143 = baru_143nama_143;
    }
}

void hapusData_143nama_143(string nama_143) {
    Node* hapus_143nama_143 = head_143nama_143;
    Node* prev_143nama_143 = nullptr;
    while (hapus_143nama_143 != nullptr && hapus_143nama_143->nama_143 != nama_143) {
        prev_143nama_143 = hapus_143nama_143;
        hapus_143nama_143 = hapus_143nama_143->next_143nama_143;
    }
    if (hapus_143nama_143 == nullptr) {
        cout << "Data tidak ditemukan" << endl;
        return;
    }
    if (prev_143nama_143 == nullptr) {
        head_143nama_143 = hapus_143nama_143->next_143nama_143;
    }
    else {
        prev_143nama_143->next_143nama_143 = hapus_143nama_143->next_143nama_143;
    }
    delete hapus_143nama_143;
}

void ubahData_143nama_143(string nama_143, string newnama_143, int newusia_143nama_143) {
    Node* temp_143nama_143 = head_143nama_143;
    while (temp_143nama_143 != nullptr && temp_143nama_143->nama_143 != nama_143) {
        temp_143nama_143 = temp_143nama_143->next_143nama_143;
    }
    if (temp_143nama_143 != nullptr) {
        temp_143nama_143->nama_143 = newnama_143;
        temp_143nama_143->usia_143nama_143 = newusia_143nama_143;
    }
}

void tampilkanData() {
    Node* temp_143nama_143 = head_143nama_143;
    while (temp_143nama_143 != nullptr) {
        cout << temp_143nama_143->nama_143 << " " << temp_143nama_143->usia_143nama_143 << endl;
        temp_143nama_143 = temp_143nama_143->next_143nama_143;
    }
}

int main() {
    insertBelakang_143nama_143("John", 19);
    insertBelakang_143nama_143("Jane", 20);
    insertBelakang_143nama_143("Michael", 18);
    insertBelakang_143nama_143("Yusuke", 19);
    insertBelakang_143nama_143("Akechi", 20);
    insertBelakang_143nama_143("Hoshino", 18);
    insertBelakang_143nama_143("Karin", 18);

    char pilihan_143nama_143;
    do {
        cout << "\nMenu Farrel_143:\n";
        cout << "a. Tampilkan data sesuai urutan tersedia (Data pertama adalah nama dan usia pengguna)\n";
        cout << "b. Hapus data Akechi\n";
        cout << "c. Tambahkan data berikut diantara John dan Jane : Futaba 18\n";
        cout << "d. Tambahkan data berikut diawal : Igor 20\n";
        cout << "e. Ubah data Michael menjadi : Reyn 18\n";
        cout << "f. Tampilkan seluruh data\n";
        cout << "g. Keluar\n";
        cout << "Pilihan Anda: ";
        cin >> pilihan_143nama_143;

        switch (pilihan_143nama_143) {
            case 'a':
                cout << "\nData yang tersedia:\n";
                tampilkanList_143nama_143();
                break;
            case 'b':
                hapusData_143nama_143("Akechi");
                cout << "Data Akechi berhasil dihapus.\n";
                cout << "\nData yang tersedia setelah penghapusan:\n";
                tampilkanList_143nama_143();
                break;
            case 'c':
                insertTengah_143nama_143("Futaba", 18, 3); 
                cout << "Data Futaba berhasil ditambahkan.\n";
                cout << "\nData yang tersedia setelah penambahan:\n";
                tampilkanList_143nama_143();
                break;
            case 'd':
                insertDepan_143nama_143("Igor", 20);
                cout << "Data Igor berhasil ditambahkan di awal.\n";
                cout << "\nData yang tersedia setelah penambahan:\n";
                tampilkanList_143nama_143();
                break;
            case 'e':
                ubahData_143nama_143("Michael", "Reyn", 18);
                cout << "Data Michael berhasil diubah menjadi Reyn 18.\n";
                cout << "\nData yang tersedia setelah perubahan:\n";
                tampilkanList_143nama_143();
                break;
            case 'f':
                cout << "\nTampilan seluruh data sekarang:\n";
                tampilkanList_143nama_143();
                break;
            case 'g':
                cout << "Terima kasih, program selesai.\n";
                break;
            default:
                cout << "Pilihan tidak valid, silakan coba lagi.\n";
                break;
        }
    } while (pilihan_143nama_143 != 'g');

    return 0;
}