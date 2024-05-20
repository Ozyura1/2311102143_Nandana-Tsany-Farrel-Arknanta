#include <iostream>
#include <string>

using namespace std;

// Fungsi untuk menghitung jumlah huruf vokal dalam kalimat
int HitungVokal(string kalimat_143)
{
    // Inisialisasi variabel penghitung
    int count = 0;

    // Looping melalui setiap karakter dalam kalimat
    for (int i = 0; i < kalimat_143.length(); i++)
    {
        // Mendapatkan karakter saat ini
        char huruf_143 = kalimat_143[i];

        // Memeriksa apakah karakter adalah huruf vokal
        if (huruf_143 == 'a' || huruf_143 == 'A' ||
            huruf_143 == 'e' || huruf_143 == 'E' ||
            huruf_143 == 'i' || huruf_143 == 'I' ||
            huruf_143 == 'o' || huruf_143 == 'O' ||
            huruf_143 == 'u' || huruf_143 == 'U')
        {
            // Jika vokal, tambahkan ke penghitung
            count++;
        }
    }

    // Mengembalikan jumlah vokal
    return count;
}

int main()
{
    // Deklarasi variabel untuk kalimat
    string kalimat_143;

    // Minta input kalimat dari pengguna
    cout << "Masukkan kalimat: ";
    getline(cin, kalimat_143);

    // Panggil fungsi untuk menghitung vokal
    int jumlahVokal = HitungVokal(kalimat_143);

    // Tampilkan hasil penghitungan
    cout << "Jumlah huruf vokal dalam kalimat: " << jumlahVokal << endl;

    return 0;
}