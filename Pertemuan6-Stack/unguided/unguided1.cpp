#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool isPalindrome(const string& kalimat_118) {
    stack<char> stack;
    
    // Hapus spasi dan masukkan karakter ke dalam stack
    for (char ch : kalimat_118) {
        if (ch != ' ') {
            stack.push(tolower(ch)); // Gunakan tolower untuk mengabaikan case sensitivity
        }
    }

    // Bandingkan karakter dengan urutan terbaliknya
    for (char ch : kalimat_118) {
        if (ch != ' ') {
            if (stack.empty() || tolower(ch) != stack.top()) {
                return false;
            }
            stack.pop();
        }
    }

    return true;
}

int main() {
    string kalimat_118;
    cout << "Masukan Kalimat: ";
    getline(cin, kalimat_118); // Menggunakan getline untuk membaca spasi

    if (isPalindrome(kalimat_118)) {
        cout << "Kalimat tersebut adalah: Palindrom" << endl;
    } else {
        cout << "Kalimat tersebut adalah bukan Palindrom" << endl;
    }

    return 0;
}