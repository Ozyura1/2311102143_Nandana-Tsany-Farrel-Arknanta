#include <iostream>
#include <map>
#include <array>

using namespace std;

int main() {
    // Deklarasi map dan array
    map<int, string> myMap;
    array<string, 3> myArray;

    // Menambahkan data ke dalam map
    myMap[1] = "Nandana_143";
    myMap[2] = "Tsany_143";
    myMap[3] = "Farrel_143";

    // Menambahkan data ke dalam array
    myArray[0] = "Nandana_143";
    myArray[1] = "Tsany_143";
    myArray[2] = "Farrel_143";

    // Mencetak data dari map
    for (const auto& item : myMap) {
        cout << "Nama: " << item.second << ", Nilai: " << item.first << endl;
    }

    // Mencetak data dari array
    for (const auto& item : myArray) {
        cout << "Nama: " << item << endl;
    }

    return 0;
}