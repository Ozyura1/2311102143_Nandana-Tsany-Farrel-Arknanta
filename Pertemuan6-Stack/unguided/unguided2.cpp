#include <iostream>
#include <stack>
#include <string>

using namespace std;

void reverseSentence(string sentence_118) {
    stack<char> charStack;

    // Push characters of the sentence onto the stack
    for (char c : sentence_118) {
        charStack.push(c);
    }

    // Pop and print characters from the stack
    cout << "Reversed Sentence: ";
    while (!charStack.empty()) {
        cout << charStack.top();
        charStack.pop();
    }
    cout << endl;
}

int main() {
    string sentence_118;
    cout << "Masukkan kalimat: ";
    getline(cin, sentence_118);
    reverseSentence(sentence_118);
    return 0;
}