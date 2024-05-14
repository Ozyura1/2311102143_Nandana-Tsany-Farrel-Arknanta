#include <iostream>
using namespace std;

// definisikan node
struct Node {
    string data_143;
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
    void enqueue(string data_143) {
        Node* newNode = new Node;
        newNode->data_143 = data_143;
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

        cout << "data_143 antrian teller : " << endl;
        while (currentNode != nullptr) {
            cout << i++ << ". " << currentNode->data_143 << endl;
            currentNode = currentNode->next;
        }
    }

private:
    Node* head;
    Node* tail;
    int size;
};

int main() {
    Queue queueTeller;

    queueTeller.enqueue("Andi");
    queueTeller.enqueue("Maya");
    queueTeller.enqueue("Budi");
    queueTeller.view();
    cout << "jumlah antrian = " << queueTeller.count() << endl;
    cout << endl;

    queueTeller.dequeue();
    queueTeller.view();
    cout << endl;

    queueTeller.enqueue("Ucup");
    queueTeller.enqueue("Umar");
    queueTeller.view();
    cout << "Jumlah antrian = " << queueTeller.count() << endl;
    cout << endl;

    queueTeller.clear();
    queueTeller.view();
    cout << "jumlah penarikan = " << queueTeller.count() << endl;

    return 0;
}