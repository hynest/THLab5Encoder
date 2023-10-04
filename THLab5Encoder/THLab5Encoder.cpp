#include <iostream>

#include <string>

#include <vector>

using namespace std;


int main() {

    vector<char> CALPHA({
        'V', 'F', 'X', 'B', 'L', 'I', 'T', 'Z', 'J', 'R', 'P', 'H', 'D', 'K', 'N', 'O', 'W', 'S', 'G', 'U', 'Y', 'Q', 'M', 'A', 'C', 'E'
    });

    string text;

    getline(cin, text);

    int length = size(text);

    cout << "Encoded Message: ";

    int i = 0;
    while (i < length) {
        int ascii = static_cast<int> (text[i]);
        if (ascii >= 65 && ascii <= 90) {
            text[i] = CALPHA.at(ascii - 65);
            cout << text[i];
            i++;
        }

        else if(ascii >= 97 && ascii <= 122) {
            text[i] = CALPHA.at(ascii - 97);
            cout << text[i];
            i++;
        }

        else {
            cout << text[i];
            i++;
        }
    }
}