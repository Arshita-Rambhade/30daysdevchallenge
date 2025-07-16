// File: vigenere_decrypt.cpp
#include <iostream>
#include <string>
using namespace std;

// Function to decrypt the Vigenère cipher
string decryptVigenere(string ciphertext, string key) {
    string result = "";
    int keyIndex = 0;

    for (int i = 0; i < ciphertext.length(); i++) {
        char c = ciphertext[i];

        // Decrypt only alphabetic characters
        if (isalpha(c)) {
            char keyChar = tolower(key[keyIndex % key.length()]);
            int shift = keyChar - 'a';

            if (isupper(c)) {
                // Decrypt uppercase letters
                char decryptedChar = (c - 'A' - shift + 26) % 26 + 'A';
                result += decryptedChar;
            } else {
                // Decrypt lowercase letters
                char decryptedChar = (c - 'a' - shift + 26) % 26 + 'a';
                result += decryptedChar;
            }

            keyIndex++; // Move to next key character
        } else {
            // Keep punctuation, spaces, etc. unchanged
            result += c;
        }
    }

    return result;
}

int main() {
    string encryptedMessage = "cmejink bh abjxbr kuz jmo jbbrtxuaf!";
    string key = "github";

    string decryptedMessage = decryptVigenere(encryptedMessage, key);
    cout << "Decrypted Message: " << decryptedMessage << endl;

    return 0;
}
