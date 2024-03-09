# <h1 align="center">Laporan Praktikum Modul Tipe Data</h1>
<p align="center">Nandana Tsany Farrel Arkananta - 2311102143</p>

## Dasar Teori

Tipe data adalah adalah sebuah pengklasifikasian data berdasarkan jenis data tersebut. Tipe data dibutuhkan agar kompiler dapat mengetahui bagaimana sebuah data akan digunakan. Adapun tipe data yang akan dipelajari, sebagai berikut :

   1. Tipe data Primitif
   2. Tipe data Abstrak
   3. Tipe data Koleksi

### Tipe data Primitif

 Tipe data primitif adalah tipe data yang sudah ditentukan oleh sistem, tipe data primitif ini disediakan oleh banyak bahasa pemrograman, perbedaannya terletak pada jumlah bit yang dialokasikan untuk setiap bit pada tipe data primitif tergantung pada bahasa pemrograman,compiler dan sistem operasinya. Contoh tipe data primitif adalah : a. Int : adalah tipe data yang digunakan untuk menyimpan bilangan bulat seperti 12, 1, 4, dan sebagainya. b. Float : tipe data yang digunakan untuk menyimpan bilangan desimal seperti 1.5, 2.1, 3.14, dan sebagainya. c. Char : berfungsi untuk menyimpan data berupa sebuah huruf. Biasanya digunakan untuk simbol seperti A, B, C dan seterusnya d. Boolean : tipe data ini digunakan untuk menyimpan nilai boolean yang hanya memiliki dua nilai yaitu true dan false.

### Tipe Data Abstrak

Tipe data abstrak atau yang biasa disebut Abstrak Data Tipe(ADT) merupakan tipe data yang dibentuk oleh programer itu sendiri. Pada tipe data abstrak bisa berisi banyak tipe data, jadi nilainya bisa lebih dari satu dan beragam tipe data. Fitur Class adalah fitur Object Oriented Program(OOP) pada bahasa C++ yang mirip dengan fitur data structures Struct pada bahasa C. Keduanya berfungsi untuk membungkus tipe data di dalamnya sebagai anggota. menurut learn.microsoft.com perbedaan antaraPraktikum Struktur Data dan Algoritma 2 Struct dan Class adalah pada akses defaultnya dimana Struct bersifat public dan Class bersifat private.

### Tipe Data Koleksi

Tipe data koleksi (Collection Data Type) adalah tipe data yang digunakan untuk mengelompokkan dan menyimpan beberapa nilai atau objek secara bersamaan. Tipe data koleksi memungkinkan Anda menyimpan, mengelola, dan mengakses sejumlah besar data dengan cara yang terstruktur. Ada beberapa tipe data koleksi yang umum digunakan dalam pemrograman, dan di antaranya adalah:

#### a. Array : Array adalah struktur data statis yang menyimpan elemen-elemen dengan
tipe data yang sama. Elemen-elemen tersebut dapat diakses dengan menggunakan indeks. Array memiliki ukuran tetap yang ditentukan saat deklarasi.

#### b. Vector : Vector adalah Standard Template Library (STL) jika di dalam C/C++
memiliki bentuk std::vector . Umumnya, vector mirip seperti array yang memiliki kemampuan untuk menyimpan data dalam bentuk elemen-elemen yang alokasi memorinya dilakukan otomatis dan bersebelahan. Kemampuan vector bukan hanya pada jumlah elemen yang dinamis, vector pada C/C++ juga dilengkapi dengan fitur-fitur pelengkap seperti element access, iterators, capacity, modifiers

#### c. Map : Map terasa mirip dengan array namun dengan index yang memungkinkan
untuk berupa tipe data selain integer. Pada map, indeks tersebut diberi nama “key”. Pada std::map digunakan Self-Balancing Tree khususnya Red-Black Tree


## Guided 

### 1. Tipe Data Primitif

```C++
#include <iostream>
#include <iomanip>

using namespace std;

 // Tipe Data Primitif Farrel
int main(){
    char op;
    float num1, num2;

    cout<< "Enter operator (+,-,*, /)";
    cin>>op;

    cout<<"enter two operands : ";
    cin>>num1>>num2;

    switch (op)
    {
    case '+':
        cout<<"Result : "<<num1+num2;
        break;
    case '-':
        cout<<"Result : "<<num1-num2;
        break;
    case '*':
        cout<<"Result : "<<num1*num2;
        break;
    case '/':
        if(num2 != 0){
            cout<<"Result: "<<fixed<<setprecision(2)<<num1/num2;
        }else{
            cout<<"Error! Division by zero is not allowed.";
        }
        break;
    
    default:
        cout<<"Error! operator is not correct";
    }
    return 0;
}
```
Kode di atas adalah program untuk melakukan operasi aritmatika dasar (penjumlahan, pengurangan, perkalian, dan pembagian) berdasarkan operator yang dimasukkan pengguna. Akan aktif ketika pengguna sudah menginput dua angka.

### 2. Tipe Data Abstrak

```C++
#include <stdio.h>
#include <string.h>

// Struct
struct Mahasiswa
{
    char name[50];
    char address[50];
    int age;
};

// Tipe Data Abstrak Farrel

int main() {
    // Menggunakan Struct
    struct Mahasiswa mhs1, mhs2;

    // Mengisi nilai ke struct
    strcpy(mhs1.name, "Dian");
    strcpy(mhs1.address, "Mataram");
    mhs1.age = 22;
    strcpy(mhs2.name, "Bambang");
    strcpy(mhs2.address, "Surabaya");
    mhs2.age = 23;

    // Mencetak isi dari struct
    printf("## Mahasiswa 1 ##\n");
    printf("Nama: %s\n", mhs1.name);
    printf("Alamat: %s\n", mhs1.address);
    printf("Umur: %d\n", mhs1.age);
    printf("\n");
    printf("## Mahasiswa 2 ##\n");
    printf("Nama: %s\n", mhs2.name);
    printf("Alamat: %s\n", mhs2.address);
    printf("Umur: %d\n", mhs2.age);

    return 0;
}
```
Program diatas merupakan program yang menggunakan struct untuk mencetak data mahasiswa. Struct 'Mahasiswa' memiliki cabang 'name' (nama), 'address'(alamat),
dan 'age' (umur). Ada dua variabel struct 'mhs1' dan 'mhs2' mendeklarasikan dan menginisialisasi dengan data mahasiswa, dan fungsi 'printf' mencetak informasi mahasiswa
## Unguided  

### 1. [Soal]

```C++
#include <iostream>
using namespace std;

int main() {
    cout << "ini adalah file code unguided praktikan" << endl;
    return 0;
}
```
#### Output:
![240302_00h00m06s_screenshot](https://github.com/suxeno/Struktur-Data-Assignment/assets/111122086/6d1727a8-fb77-4ecf-81ff-5de9386686b7)

Kode di atas digunakan untuk mencetak teks "ini adalah file code guided praktikan" ke layar menggunakan function cout untuk mengeksekusi nya.

## Kesimpulan
Ringkasan dan interpretasi pandangan kalia dari hasil praktikum dan pembelajaran yang didapat[1].

## Referensi
[1] I. Holm, Narrator, and J. Fullerton-Smith, Producer, How to Build a Human [DVD]. London: BBC; 2002.