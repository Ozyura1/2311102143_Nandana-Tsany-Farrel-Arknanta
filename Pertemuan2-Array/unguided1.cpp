// Nandana Tsany Farrel Arkananta-2311102143-S1IF11D

#include <iostream>

using namespace std;

int main() {
    //deklarasi array data dengan 10 elemen 1-10
    int data_143[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    cout << "Data array: ";
    for (int i = 0; i < 10; i ++){
        cout << data_143[i] << " ";
    }
    cout << endl << endl;
//menginputkan elemen data nomor genap 
    cout << "nomor genap: ";
    //menampilkan data array elemen nomor genap dari 1-10
    for (int i = 0; i < 10; i++){
        if (data_143 [i] % 2 ==0){
            cout << data_143[i] << " ";
        }
    }
    cout << endl << endl;
//menginputkan elemen data nomor ganjil
    cout << "nomor ganjil: ";
    //menampilkan data array elemen nomor ganjil dari 1-10 menggunakan perulangan for
    for (int i =0; i < 10; i ++){
        if (data_143 [i] %2 !=0){
            cout << data_143[i] << " ";
        }
    }
    cout << endl;
    return 0;
}