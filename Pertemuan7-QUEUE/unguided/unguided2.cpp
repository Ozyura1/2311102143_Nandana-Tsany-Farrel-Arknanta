#include <iostream>
using namespace std;

// definisikan node
struct Node {
    string nama_143;
    string nim_143;
    Node* next;
};

// definisikan queue
class Queue {
public:
    Queue() : head(nullptr), tail(nullptr), size(0) {}

    // fungsi pengecekan
    bool isEmpty() {
        return size == 0;
    }

    // fungsi pengecekan
    bool isFull() {
        return false; // linked list tidak memiliki kapasitas maksimum
    }

    // fungsi menambahkan antrian
    void enqueue(string nama_143, string nim_143) {
        Node* newNode = new Node;
        newNode->nama_143 = nama_143;
        newNode->nim_143 = nim_143;
        newNode->next = nullptr;

        if (isEmpty()) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
        size++;
    }

    // fungsi mengurangi antrian
    void dequeue() {
        if (isEmpty()) {
            cout << "antrian kosong" << endl;
        } else {
            Node* tempNode = head;
            head = head->next;
            delete tempNode;
            size--;
        }
    }

    // fungsi menghitung banyak antrian
    int count() {
        return size;
    }

    // fungsi menghapus semua antrian
    void clear() {
        while (!isEmpty()) {
            dequeue();
        }
    }

    // fungsi melihat antrian
    void view() {
        Node* currentNode = head;
        int i = 1;

        cout << "data antrian mahasiswa : " << endl;
        while (currentNode != nullptr) {
            cout << i++ << ". nama_143: " << currentNode->nama_143 << ", nim_143: " << currentNode->nim_143 << endl;
            currentNode = currentNode->next;
        }
    }

private:
    Node* head;
    Node* tail;
    int size;
};

int main() {
    Queue queueMahasiswa;

    queueMahasiswa.enqueue("Andi", "123456");
    queueMahasiswa.enqueue("Maya", "789012");
    queueMahasiswa.enqueue("Budi", "345678");
    queueMahasiswa.view();
    cout << "jumlah antrian = " << queueMahasiswa.count() << endl;
    cout << endl;

    queueMahasiswa.dequeue();
    queueMahasiswa.view();
    cout << endl;

    queueMahasiswa.enqueue("Ucup", "901234");
    queueMahasiswa.enqueue("Umar", "567890");
    queueMahasiswa.view();
    cout << "Jumlah antrian = " << queueMahasiswa.count() << endl;
    cout << endl;

    queueMahasiswa.clear();
    queueMahasiswa.view();
    cout << "jumlah penarikan = " << queueMahasiswa.count() << endl;

    return 0;
}