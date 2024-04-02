#include <iostream>
#include <iomanip>

using namespace std;

// Deklarasi struct node
struct node
{
    string Nama_143;
    string NIM_143;
    node *next;
};
node *head;
node *tail;

// Inisialisasi node head & tail
void Inisialisasi_143()
{
    head = NULL;
    tail = NULL;
}

// Fungsi pengecekan
bool isEmpty_143()
{
    return head == NULL;
}

// Prosedur hitung node
int HitungNode_143()
{
    node *hitung = head;
    int jumlah_143 = 0;
    while (hitung != NULL)
    {
        hitung = hitung->next;
        jumlah_143++;
    }
    return jumlah_143;
}

// Prosedur tambah depan
void TambahDepan_143(string Name_143, string NIM_143)
{
    node *baru = new node;
    baru->Nama_143 = Name_143;
    baru->NIM_143 = NIM_143;
    baru->next = NULL;
    if (isEmpty_143())
    {
        head = tail = baru;
    }
    else
    {
        baru->next = head;
        head = baru;
    }
}

// Prosedur tambah belakang
void TambahBelakang_143(string Name_143, string NIM_143)
{
    node *baru = new node;
    baru->Nama_143 = Name_143;
    baru->NIM_143 = NIM_143;
    baru->next = NULL;
    if (isEmpty_143())
    {
        head = tail = baru;
    }
    else
    {
        tail->next = baru;
        tail = baru;
    }
}

// Prosedur tambah tengah
void TambahTengah_143(string Name_143, string NIM_143, int Position_143)
{
    if (Position_143 < 1 || Position_143 > HitungNode_143())
    {
        cout << "Node yang ingin ditambah diluar jangkauan !!" << endl;
    }
    else if (Position_143 == 1)
    {
        cout << "Node yang ingin ditambah bukan ditengah !!" << endl;
    }
    else
    {
        node *bantu = head;
        node *baru = new node;
        baru->Nama_143 = Name_143;
        baru->NIM_143 = NIM_143;
        int hitung_143 = 1;
        while (hitung_143 < Position_143 - 1)
        {
            bantu = bantu->next;
            hitung_143++;
        }
        baru->next = bantu->next;
        bantu->next = baru;
    }
}

// Prosedur hapus depan
void HapusDepan_143()
{
    if (isEmpty_143())
    {
        cout << "List masih kosong !!" << endl;
    }
    else
    {
        node *hapus = head;
        head = head->next;
        delete hapus;
    }
}

// Fungsi tampil data depan
void TampilDepan_143()
{
    if (isEmpty_143())
    {
        cout << "List masih kosong !!" << endl;
    }
    else
    {
        cout << "Data terdepan: " << head->Nama_143 << " - " << head->NIM_143 << endl;
    }
}

// Prosedur hapus belakang
void HapusBelakang_143()
{
    if (isEmpty_143())
    {
        cout << "List masih kosong !!" << endl;
    }
    else
    {
        if (head == tail)
        {
            delete head;
            head = tail = NULL;
        }
        else
        {
            node *hapus = head;
            while (hapus->next != tail)
            {
                hapus = hapus->next;
            }
            delete tail;
            tail = hapus;
            tail->next = NULL;
        }
    }
}

// Fungsi tampil data belakang
void TampilBelakang_143()
{
    if (isEmpty_143())
    {
        cout << "List masih kosong !!" << endl;
    }
    else
    {
        cout << "Data terbelakang: " << tail->Nama_143 << " - " << tail->NIM_143 << endl;
    }
}

// Prosedur hapus tengah
void HapusTengah_143(int posisi_143)
{
    if (posisi_143 < 1 || posisi_143 > HitungNode_143())
    {
        cout << "Posisi node yang akan dihapus offside !!" << endl;
    }
    else if (posisi_143 == 1)
    {
        cout << "Node yang ingin dihapus bukan node tengah" << endl;
    }
    else
    {
        node *hapus = head;
        node *bantu = NULL;
        for (int i = 1; i < posisi_143; i++)
        {
            bantu = hapus;
            hapus = hapus->next;
        }
        bantu->next = hapus->next;
        delete hapus;
    }
}

// Fungsi tampil data tengah
void TampilTengah_143(int Position_143)
{
    node *tampil = head;
    if (isEmpty_143())
    {
        cout << "List masih kosong !!" << endl;
    }
    else
    {
        for (int i = 1; i < Position_143; i++)
        {
            tampil = tampil->next;
        }
        cout << "Data pada posisi " << Position_143 << ": " << tampil->Nama_143 << " - " << tampil->NIM_143 << endl;
    }
}

// Prosedur ubah depan
void UbahDepan_143(string NewName_143, string NewNIM_143)
{
    if (isEmpty_143())
    {
        cout << "List masih kosong !!" << endl;
    }
    else
    {
        head->Nama_143 = NewName_143;
        head->NIM_143 = NewNIM_143;
    }
}

// Prosedur ubah belakang
void UbahBelakang_143(string NewName_143, string NewNIM_143)
{
    if (isEmpty_143())
    {
        cout << "List masih kosong !!" << endl;
    }
    else
    {
        tail->Nama_143 = NewName_143;
        tail->NIM_143 = NewNIM_143;
    }
}

// Prosedur ubah tengah
void UbahTengah_143(string NewName_143, string NewNIM_143, int Position_143)
{
    if (isEmpty_143())
    {
        cout << "List masih kosong!" << endl;
    }
    else
    {
        if (Position_143 < 1 || Position_143 > HitungNode_143())
        {
            cout << "Node yang ingin diubah diluar jangkauan !!" << endl;
        }
        else if (Position_143 == 1)
        {
            cout << "Node yang ingin diubah bukan ditengah !!" << endl;
        }
        else
        {
            node *bantu = head;
            for (int i = 1; i < Position_143; i++)
            {
                bantu = bantu->next;
            }
            bantu->Nama_143 = NewName_143;
            bantu->NIM_143 = NewNIM_143;
        }
    }
}

// Prosedur hapus list
void HapusList_143()
{
    node *hapus;
    while (head != NULL)
    {
        hapus = head;
        head = head->next;
        delete hapus;
    }
    tail = NULL;
}

// Prosedur tampil list
void TampilList_143()
{
    if (isEmpty_143())
    {
        cout << "List masih kosong !!" << endl;
    }
    else
    {
        cout << "------------------------------------------" << endl;
        cout << "|         NAMA         |       NIM       |" << endl;
        cout << "------------------------------------------" << endl;
        node *bantu = head;
        while (bantu != NULL)
        {
            cout << "|" << setw(22) << left << bantu->Nama_143 << "|" << setw(17) << left << bantu->NIM_143 << "|" << endl;
            bantu = bantu->next;
        }
        cout << "------------------------------------------" << endl;
    }
}

int main()
{
    int Position_143, Choose_143;
    string Name_143, OldName_143, NIM_143, OldNIM_143;
    char Yakin_143;
    Inisialisasi_143();
MenuUtama:
    cout << "-=-=-=->> PROGRAM SINGLE LINKED LIST <<-=-=-=-=" << endl;
    cout << "-=-=-=-=-=-=->> NON-CIRCULAR <<-=-=-=-=-=-=-=-=" << endl;
    cout << "1. TAMBAH DEPAN" << endl;
    cout << "2. TAMBAH BELAKANG" << endl;
    cout << "3. TAMBAH TENGAH" << endl;
    cout << "4. UBAH DEPAN" << endl;
    cout << "5. UBAH BELAKANG" << endl;
    cout << "6. UBAH TENGAH" << endl;
    cout << "7. HAPUS DEPAN" << endl;
    cout << "8. HAPUS BELAKANG" << endl;
    cout << "9. HAPUS TENGAH" << endl;
    cout << "10. HAPUS LIST" << endl;
    cout << "11. TAMPILKAN" << endl;
    cout << "0. KELUAR" << endl;
    cout << "Masukkan pilihan anda : ";
    cin >> Choose_143;
    cout << endl;
    switch (Choose_143)
    {

    case 1:
        cout << "=-=-=-=-=-=->> TAMBAH DEPAN <<-=-=-=-=-=-=" << endl;
        cout << ">> Masukkan data yang ingin ditambahkan <<" << endl;
        cout << "Nama Mahasiswa : ";
        cin >> Name_143;
        cout << "NIM Mahasiswa  : ";
        cin >> NIM_143;
        TambahDepan_143(Name_143, NIM_143);
        cout << "Data berhasil ditambahkan!!" << endl;
        cout << endl;
        goto MenuUtama;
        break;

    case 2:
        cout << "=-=-=-=-=->> TAMBAH BELAKANG <<=-=-=-=-=-=" << endl;
        cout << ">> Masukkan data yang ingin ditambahkan <<" << endl;
        cout << "Nama Mahasiswa : ";
        cin >> Name_143;
        cout << "NIM Mahasiswa  : ";
        cin >> NIM_143;
        TambahBelakang_143(Name_143, NIM_143);
        cout << "Data berhasil ditambahkan!!" << endl;
        cout << endl;
        goto MenuUtama;
        break;

    case 3:
        cout << "=-=-=-=-=-=->> TAMBAH TENGAH <<-=-=-=-=-=-" << endl;
        cout << ">> Masukkan data yang ingin ditambahkan <<" << endl;
        cout << "Nama Mahasiswa : ";
        cin >> Name_143;
        cout << "NIM Mahasiswa  : ";
        cin >> NIM_143;
        cout << "Posisi data    : ";
        cin >> Position_143;
        TambahTengah_143(Name_143, NIM_143, Position_143);
        cout << "Data berhasil ditambahkan!!" << endl;
        cout << endl;
        goto MenuUtama;
        break;

    case 4:
        cout << "=-=-=-=-=-=-=->> UBAH DEPAN <<-=-=-=-=-=-=-=" << endl;
        cout << ">> Masukkan data yang akan diubah <<" << endl;
        cout << "--- Data Lama ---" << endl;
        cout << "Nama Mahasiswa lama : ";
        cin >> OldName_143;
        cout << "NIM Mahasiswa lama  : ";
        cin >> OldNIM_143;
        cout << "-=- Data Baru -=-" << endl;
        cout << "Nama mahasiswa baru : ";
        cin >> Name_143;
        cout << "NIM mahasiswa baru  : ";
        cin >> NIM_143;
        UbahDepan_143(Name_143, NIM_143);
        cout << "Data mahasiswa " << OldName_143 << " (" << OldNIM_143 << ") telah diganti dengan data mahasiswa baru " << Name_143 << " (" << NIM_143 << ")" << endl;
        cout << endl;
        goto MenuUtama;
        break;

    case 5:
        cout << "=-=-=-=-=-=-=->> UBAH BELAKANG <<-=-=-=-=-=-=-=" << endl;
        cout << ">> Masukkan data yang akan diubah <<" << endl;
        cout << "-=- Data Lama -=-" << endl;
        cout << "Nama Mahasiswa lama : ";
        cin >> OldName_143;
        cout << "NIM Mahasiswa lama  : ";
        cin >> OldNIM_143;
        cout << "-=- Data Baru -=-" << endl;
        cout << "Nama mahasiswa baru : ";
        cin >> Name_143;
        cout << "NIM mahasiswa baru  : ";
        cin >> NIM_143;
        UbahBelakang_143(Name_143, NIM_143);
        cout << "Data mahasiswa " << OldName_143 << " (" << OldNIM_143 << ") telah diganti dengan data mahasiswa baru " << Name_143 << " (" << NIM_143 << ")" << endl;
        cout << endl;
        goto MenuUtama;
        break;

    case 6:
        cout << "=-=-=-=-=-=-=->> UBAH TENGAH <<-=-=-=-=-=-=-=-" << endl;
        cout << ">> Masukkan data yang akan diubah <<" << endl;
        cout << "-=- Data Lama -=-" << endl;
        cout << "Nama Mahasiswa lama : ";
        cin >> OldName_143;
        cout << "NIM Mahasiswa lama  : ";
        cin >> OldNIM_143;
        cout << "Posisi data lama pada list : ";
        cin >> Position_143;
        cout << "-=- Data Baru -=-" << endl;
        cout << "Nama mahasiswa baru : ";
        cin >> Name_143;
        cout << "NIM mahasiswa baru  : ";
        cin >> NIM_143;
        UbahTengah_143(Name_143, NIM_143, Position_143);
        cout << "Data mahasiswa " << OldName_143 << " (" << OldNIM_143 << ") pada posisi ke-" << Position_143 << " telah diganti dengan data mahasiswa baru " << Name_143 << " (" << NIM_143 << ")" << endl;
        cout << endl;
        goto MenuUtama;
        break;

    case 7:
        cout << "=-=-=-=-=-=-=->> HAPUS DEPAN <<-=-=-=-=-=-=-=-=" << endl;
        cout << "Apakah anda yakin untuk menghapus data mahasiswa " << TampilDepan_143() << "?? [y/n] : ";
        cin >> Yakin_143;
        if (Yakin_143 == 'y' || Yakin_143 == 'Y')
        {
            HapusDepan_143();
            cout << "Data telah dihapus !!" << endl;
        }
        else if (Yakin_143 == 'n' || Yakin_143 == 'N')
        {
            cout << "Aksi dibatalkan" << endl;
        }
        cout << endl;
        goto MenuUtama;
        break;

    case 8:
        cout << "=-=-=-=-=-=-=->> HAPUS BELAKANG <<-=-=-=-=-=-=-=" << endl;
        cout << "Apakah anda yakin untuk menghapus data mahasiswa " << TampilBelakang_143() << "? [y/n] : ";
        cin >> Yakin_143;
        if (Yakin_143 == 'y' || Yakin_143 == 'Y')
        {
            HapusBelakang_143();
            cout << "Data telah dihapus !!" << endl;
        }
        else if (Yakin_143 == 'n' || Yakin_143 == 'N')
        {
            cout << "Aksi dibatalkan" << endl;
        }
        cout << endl;
        goto MenuUtama;
        break;

    case 9:
        cout << "=-=-=-=-=-=-=->> HAPUS TENGAH <<-=-=-=-=-=-=-=" << endl;
        cout << "Masukkan posisi data yang ingin dihapus : ";
        cin >> Position_143;
        cout << "Apakah anda yakin untuk menghapus data mahasiswa " << TampilTengah_143(Position_143) << "? [y/n] : ";
        cin >> Yakin_143;
        if (Yakin_143 == 'y' || Yakin_143 == 'Y')
        {
            HapusTengah_143(Position_143);
            cout << "Data telah dihapus !!" << endl;
        }
        else if (Yakin_143 == 'n' || Yakin_143 == 'N')
        {
            cout << "Aksi dibatalkan" << endl;
        }
        cout << endl;
        goto MenuUtama;
        break;

    case 10:
        cout << "-=-=-=-=-=-=-=->> HAPUS LIST <<=--=-=-=-=-=-=-=" << endl;
        cout << "Apakah anda yakin untuk menghapus semua data? [y/n] : ";
        cin >> Yakin_143;
        if (Yakin_143 == 'y' || Yakin_143 == 'Y')
        {
            HapusList_143();
            cout << "List telah terhapus !!" << endl;
        }
        else if (Yakin_143 == 'n' || Yakin_143 == 'N')
        {
            cout << "Aksi dibatalkan" << endl;
        }
        cout << endl;
        goto MenuUtama;
        break;

    case 11:
        cout << "=-=-=-=-=-=->> TAMPIL LIST <<-=-=-=-=-=-=-=" << endl;
        TampilList_143();
        cout << endl;
        goto MenuUtama;
        break;

    case 0:
        cout << "Anda telah keluar dari program !!" << endl;
        return 0;
        break;
    default:
        cout << "Pilihan anda tidak tersedia !!" << endl;
        cout << endl;
        goto MenuUtama;
        break;
    }
}
