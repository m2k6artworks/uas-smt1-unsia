
/* Dibuat oleh Muhammad Zidan Khalil Gibran - 230401070209 */

#include <iostream>
#include <string>

using namespace std;

string sensorKata(string sentence, string censoredWord, char censoredChar) {
    string result;
    size_t position = 0;
    while ((position = sentence.find(censoredWord, position)) != string::npos) {
        // Ganti setiap karakter pada kata yang disensor dengan karakter untuk sensor
        for (size_t i = 0; i < censoredWord.length(); ++i) {
            sentence[position + i] = censoredChar;
        }
        position += censoredWord.length();
    }
    return sentence;
}

int main() {
    // Deklarasi Variable
    string sentence, censoredWord;
    char censoredChar;
    
    // Inputan
    cout << "Masukkan Kalimat : ";
    getline (cin >> ws, sentence);
    cout << endl;
    cout << "Kata yang ingin disensor : ";
    getline (cin >> ws, censoredWord);
    cout << endl;
    cout << "Karakter untuk sensor : ";
    cin >> censoredChar;
    cout << endl;

    // Panggil fungsi sensorKata
    string hasil = sensorKata(sentence, censoredWord, censoredChar);

    // Output hasil
    cout << "Output: " << hasil << endl;

    return 0;
}
