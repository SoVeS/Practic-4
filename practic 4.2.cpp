#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

string reverse(const string& str) {
    string reversed = str;
    reverse(reversed.begin(), reversed.end());
    return reversed;
}

string removeVowels(const string& str) {
    string result;
    for (char c : str) {
        if (tolower(c) != 'a' && tolower(c) != 'e' && tolower(c) != 'i' && tolower(c) != 'o' && tolower(c) != 'u') {
            result += c;
        }
    }
    return result;
}
string removeConsonants(const string& str) {
    string result;
    for (char c : str) {
        if (tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u')
        {
            result += c;
        }
        else { }
    }
    return result;
}


string shuffle(const string& str) {
    string shuffled = str;
    random_shuffle(shuffled.begin(), shuffled.end());
    return shuffled;
}

int main() {
    string stroka;

    cout << "Vvedite cho-nibud\' ";
    cin >> stroka;

    int choice;

    do {
        cout << "\nKakoe deystvie:\n";
        cout << "1. zadom na pered.\n";
        cout << "2. Bez glasnikh.\n";
        cout << "3. Bez soglasnikh.\n";
        cout << "4. Random.\n";
        cout << "0. Exit.\n";
        cout << "Resul\'tat: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << reverse(stroka) << endl;
                break;
            case 2:
                cout << removeVowels(stroka) << endl;
                break;
            case 3:
                cout << removeConsonants(stroka) << endl;
                break;
            case 4:
                cout << shuffle(stroka) << endl;
                break;
            case 0:
                cout << "bye.\n";
                break;
            default:
                cout << "try again.\n";
                break;
        }

    } while (choice != 0);

    return 0;
}