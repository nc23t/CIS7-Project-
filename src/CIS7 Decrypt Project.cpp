#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string encrypt(const string& text, const string& key) 
{
    string encrypted;
    int keyLen = key.length();

    for (size_t i = 0; i < text.length(); ++i) {
        char ch = text[i];
        if (isalpha(ch)) {
            char base = isupper(ch) ? 'A' : 'a';
            char keyChar = isupper(ch) ? toupper(key[i % keyLen]) : tolower(key[i % keyLen]);
            encrypted += (ch + keyChar - 2 * base) % 26 + base;
        }
        else {
            encrypted += ch; // Preserve non-alphabet characters
        }
    }
    return encrypted;
}

string decrypt(const string& text, const string& key)
{
    string decrypted;
    int keyLen = key.length();

    for (size_t i = 0; i < text.length(); ++i) {
        char ch = text[i];
        if (isalpha(ch)) {
            char base = isupper(ch) ? 'A' : 'a';
            char keyChar = isupper(ch) ? toupper(key[i % keyLen]) : tolower(key[i % keyLen]);
            decrypted += (ch - keyChar + 26) % 26 + base;
        }
        else {
            decrypted += ch;
        }
    }
    return decrypted;
}

int main() 
{
    string text, key;
    cout << "Enter the message: ";
    getline(cin, text);
    cout << "Enter the key: ";
    getline(cin, key);

    string encryptedText = encrypt(text, key);
    cout << "Encrypted Message: " << encryptedText << endl;

    string decryptedText = decrypt(encryptedText, key);
    cout << "Decrypted Message: " << decryptedText << endl;

    return 0;
}
